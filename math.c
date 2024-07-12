#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>
#include <time.h>

#define DOWNLOAD_URL "http://speedtest.tele2.net/1MB.zip"
#define UPLOAD_URL "https://example.com/upload" // Replace with a suitable upload URL

typedef struct {
    time_t start_time;
    time_t end_time;
    size_t downloaded_bytes;
    size_t uploaded_bytes;
} SpeedTestInfo;

// Callback function to write received data into a buffer and track download/upload progress
size_t write_data(void *ptr, size_t size, size_t nmemb, void *stream) {
    SpeedTestInfo *info = (SpeedTestInfo *)stream;
    size_t bytes = size * nmemb;

    if (info->start_time == 0) {
        info->start_time = time(NULL);
    }

    info->downloaded_bytes += bytes;
    return bytes;
}

int main() {
    CURL *curl;
    CURLcode res;
    SpeedTestInfo download_info = {0};
    SpeedTestInfo upload_info = {0};

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if (curl) {
        // Set up download test
        curl_easy_setopt(curl, CURLOPT_URL, DOWNLOAD_URL);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &download_info);

        // Perform download test
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "Download test failed: %s\n", curl_easy_strerror(res));
        } else {
            download_info.end_time = time(NULL);
            double download_time = difftime(download_info.end_time, download_info.start_time);
            printf("Download Speed: %.2f Mbps\n",
                   (download_info.downloaded_bytes * 8.0) / (download_time * 1000000));
        }

        // Set up upload test
        curl_easy_setopt(curl, CURLOPT_URL, UPLOAD_URL);
        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
        curl_easy_setopt(curl, CURLOPT_READFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_READDATA, &upload_info);

        // Perform upload test
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            fprintf(stderr, "Upload test failed: %s\n", curl_easy_strerror(res));
        } else {
            upload_info.end_time = time(NULL);
            double upload_time = difftime(upload_info.end_time, upload_info.start_time);
            printf("Upload Speed: %.2f Mbps\n",
                   (upload_info.uploaded_bytes * 8.0) / (upload_time * 1000000));
        }

        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
    return 0;
}

#include <stdio.h>
#include <time.h>

int main() {
    while (1) {
        // Get the current time
        time_t currentTime;
        struct tm *localTime;

        time(&currentTime);
        localTime = localtime(&currentTime);

        // Extract hours, minutes, and seconds
        int hours = localTime->tm_hour;
        int minutes = localTime->tm_min;
        int seconds = localTime->tm_sec;

        // Print the digital clock
        printf("\r%02d:%02d:%02d", hours, minutes, seconds);
        
        fflush(stdout); // Flush the output buffer
        usleep(1000000);   
    }

    return 0;
}

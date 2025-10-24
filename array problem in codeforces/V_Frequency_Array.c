#include <stdio.h>

int main()
{
    int n, higest;
    scanf("%d %d", &n, &higest);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int freq[higest + 1];
    for (int i = 0; i <= higest; i++)
    {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= higest; i++)
    {
        printf("%d\n", freq[i]);
    }

    return 0;
}

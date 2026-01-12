#include <stdio.h>
void findminmax(int arr[], int n);

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    findminmax(arr, n);
    return 0;
}
void findminmax(int arr[], int n)
{
    int max = arr[1];
    int min = arr[1];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%d %d\n", min, max);
}
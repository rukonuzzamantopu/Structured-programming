#include <stdio.h>
void printArray(int arr[], int i, int n)
{
    if (i == n)
    {
        return;
    }
    printf("%d\n", arr[i]);
    printArray(arr, i + 1, n);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printArray(arr, 0, n);
    return 0;
}
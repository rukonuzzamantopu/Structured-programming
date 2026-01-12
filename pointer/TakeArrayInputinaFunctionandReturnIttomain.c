#include <stdio.h>

int *inputArray(int n)
{
    static int arr[100]; // static so it is not destroyed after function ends

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    return arr; // return address of the array
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int *p = inputArray(n); // receive returned array

    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }

    return 0;
}

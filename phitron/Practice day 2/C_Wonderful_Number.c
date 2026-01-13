#include <stdio.h>

// Function to check if a number is odd
int isOdd(int n)
{
    return n % 2 != 0;
}

// Function to check if binary representation is palindrome
int isBinaryPalindrome(int n)
{
    int bin[40], len = 0;

    // Convert number to binary
    while (n > 0)
    {
        bin[len++] = n % 2;
        n = n / 2;
    }

    // Check palindrome
    for (int i = 0; i < len / 2; i++)
    {
        if (bin[i] != bin[len - 1 - i])
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if (isOdd(n) && isBinaryPalindrome(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

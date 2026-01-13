#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n == 1)
    {
        printf("0");
        return 0;
    }
    if (n == 2)
    {
        printf("1");
        return 0;
    }

    long long a = 0, b = 1, c;

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%lld", b);
    return 0;
}



// #include <stdio.h>

// long long fibonacci(int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%lld\n", fibonacci(n));
//     return 0;
// }


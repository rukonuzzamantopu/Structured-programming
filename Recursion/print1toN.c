#include <stdio.h>

void func1(int i, long long int n)
{
    if (i > n)
    {
        return;
    }
    printf("%d\n", i);
    func1(i + 1, n);
}
int main()
{
    int i = 1;
    long long int n;
    scanf("%lld", &n);
    func1(i,n);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     long long int n;
//     if (scanf("%lld", &n) != 1) return 1;

//     // Use a loop instead of recursion to avoid stack overflow
//     for (long long int i = 1; i <= n; i++) {
//         printf("%lld\n", i);
//     }

//     return 0;
// }
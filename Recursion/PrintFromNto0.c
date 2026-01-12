// #include <stdio.h>

// void func1(long long int n)
// {
//     if (n < 0)
//     {
//         return;
//     }
//     printf("%lld\n", n);
//     func1(n-2);
// }

// int main()
// {
   
//     long long int n;
//     scanf("%lld", &n);
//     func1(n);
//     return 0;
// }


#include <stdio.h>

void func1(int i, long long int n)
{
    if (i > n)
    {
        return;
    }
    
    func1(i + 1, n);
    printf("%d\n", i);
}
int main()
{
    int i = 1;
    long long int n;
    scanf("%lld", &n);
    func1(i,n);
    return 0;
}

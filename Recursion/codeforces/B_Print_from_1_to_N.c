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

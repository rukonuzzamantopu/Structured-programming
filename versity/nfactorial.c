#include<stdio.h>
   // factorial of input n//
int main()
{
    int n,f;
    printf("Enter the value of factorial:");
    scanf("%d",&n);
    f=fact(n);
    printf("your result for input is %d\n\n",f);
    return 0;
}
int fact(int n)
{
    int f;
    if (n==1)
    return 1;
    f=n*fact(n-1);
    return f;
}
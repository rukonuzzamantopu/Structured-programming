#include <stdio.h>
void printRecursion(int n, int count)
{

    if (n <= count)
    {
        return;
    }
    printf("I love Recursion\n");
    printRecursion(n, count + 1);
}
int main()
{
    int count = 0;
    int n;
    scanf("%d", &n);

    printRecursion(n, count);
    return 0;
}
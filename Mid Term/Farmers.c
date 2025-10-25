#include <stdio.h>
#include <limits.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    while (testcase--)
    {
        int x, y, z, result = 0;
        scanf("%d %d %d", &x, &y, &z);

        result = x * z / (x + y);
        int final = z - result;
        printf("%d\n", final);
    }
    return 0;
}
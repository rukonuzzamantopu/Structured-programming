#include <stdio.h>
#include <string.h>

int main()
{

    char digits[1000001];
    scanf("%s", digits);

    int sum = 0;
    int len=strlen(digits);
    
    for (int i = 0; i <len; i++)
    {
        sum += digits[i] - '0';
    }

    printf("%d\n", sum);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    int len2 = strlen(str2);
    for (int i = 0; i <= len2; i++)
    {
        str1[i] = str2[i];
    }
    printf("%s %s", str1, str2);
    return 0;
}
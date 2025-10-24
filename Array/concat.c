#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    int lant1 = strlen(str1);
    int lant2 = strlen(str2);

    for (int i = 0; i <= lant2; i++)
    {
        str1[lant1 + i] = str2[i];
    }
    // str1[lant1 + lant2] = '\0';
    printf("%s %s", str1, str2);
    return 0;
}
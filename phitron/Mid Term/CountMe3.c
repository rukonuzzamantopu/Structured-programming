#include <stdio.h>
#include <limits.h>
int main()
{
    int testcase;
    scanf("%d", &testcase);
    while (testcase--)
    {
        char s[10000];
        scanf("%s", s);
        int SALB = 0, CALB = 0, DIGIT = 0;
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                CALB++;
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                SALB++;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                DIGIT++;
            }
        }
        printf("%d %d %d\n", CALB, SALB, DIGIT);
    }
    return 0;
}
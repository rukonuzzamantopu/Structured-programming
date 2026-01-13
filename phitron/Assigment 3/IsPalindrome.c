
#include <stdio.h>
#include <string.h>
int is_palindrome(char str[])
{

    char str2[strlen(str)];

    strcpy(str2, str);

    int c = strcmp(str, strrev(str2));
    return c;
}

int main()
{
    char str[1001];
    scanf("%s", &str);

    int result = is_palindrome(str);
    if (result == 0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}

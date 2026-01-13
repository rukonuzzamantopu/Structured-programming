#include <stdio.h>
#include <string.h>

int countVowels(char s[], int i)
{
    if (s[i] == '\0')
        return 0;

    char c = s[i];
    int isVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    return isVowel + countVowels(s, i + 1);
}

int main()
{
    char s[205];
    fgets(s, sizeof(s), stdin);

    printf("%d", countVowels(s, 0));

    return 0;
}

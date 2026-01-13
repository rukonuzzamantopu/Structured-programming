#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    char t[1001];

    scanf("%s", s);
    scanf("%s", t);
    //  int count1 = 0;
    // for(int i = 0; s[i] != '\0'; i++){
    //     count1++;
    // }
    // int count2 = 0;
    // for(int i = 0; t[i] != '\0'; i++){
    //     count2++;
    // }

    int count1 = strlen(s);
    int count2 = strlen(t);

    printf("%d %d\n", count1, count2);

    printf("%s %s", s, t);

    return 0;
}
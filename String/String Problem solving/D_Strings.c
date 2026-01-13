#include <stdio.h>
int main()
{
    char a[11], b[11];
    scanf("%s\n %s", a, b);

    int x = strlen(a);
    int y = strlen(b);

    printf("%d %d\n", x, y);
    char topu[22];
    strcpy(topu, a);
   

    printf("%s\n", strcat(topu, b));

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s\n", a, b);

    return 0;
}
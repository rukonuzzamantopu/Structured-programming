#include <stdio.h>
#include <string.h>

int main() {
    int x;
    scanf("%d", &x);
    char a[100][1001];  

    for (int i = 0; i < x; i++) {
        scanf("%s", a[i]);  
    }

    for (int i = 0; i < x; i++) {
         if(strlen(a[i]) <= 10){
            printf("%s\n", a[i]);
        }
        else {
            printf("%c%d%c\n", a[i][0], strlen(a[i]) - 2, a[i][strlen(a[i]) - 1]);
        }
    }

    return 0;
}

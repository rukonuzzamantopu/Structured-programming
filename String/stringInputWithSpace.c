#include <stdio.h>
int main(){
    char a[50];
    fgets(a, sizeof(a), stdin);
    printf("%s\n", a);
    return 0;
}
#include <stdio.h>
int main(){
    int a,b,trmp;
    scanf("%d %d", &a, &b);
    trmp = a;   
    a=b;
    b=trmp;
    printf("a=%d b=%d", a,b);
    return 0;
}
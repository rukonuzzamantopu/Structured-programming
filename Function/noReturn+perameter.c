#include <stdio.h>

void sum(int a, int b){
    int t=a+b;
    printf("%d\n", t);
}
void subtract(int a, int b){
    int t=a-b;
    printf("%d\n", t);
}

int main(){
   int a, b;
   scanf("%d %d", &a, &b);
    sum(a, b);
    sum(a, b);
    subtract(a, b);
    subtract(a, b);
    return 0;
}
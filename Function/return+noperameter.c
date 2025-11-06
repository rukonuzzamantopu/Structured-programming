#include <stdio.h>

int sum(){
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}
int subtract(){
    int a, b;
    scanf("%d %d", &a, &b);
    return a - b;
}

int main(){
     int x=sum();
     int y=sum();
     int z=subtract();
     int w=subtract();
     printf("%d\n%d\n%d\n%d\n", x, y, z, w);
    return 0;
}
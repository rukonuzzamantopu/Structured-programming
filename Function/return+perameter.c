#include <stdio.h>

int sum(int a, int b){
    return a + b;
}
int subtract(int a, int b){
    return a - b;
}

int main(){
     int x=sum(5, 3);
     int y=sum(10, 4);
     int z=subtract(89, 75);
     int w=subtract(76, 2);
     printf("%d\n%d\n%d\n%d\n", x, y, z, w);
    return 0;
}
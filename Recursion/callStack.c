#include <stdio.h>
void functionA(){
    printf("Function A called\n");
    functionB();
    printf("Function A returning\n");
}
void functionB(){
    printf("Function B called\n");
    functionC();
    printf("Function B returning\n");
}
void functionC(){
    printf("Function C called\n");
    printf("Function C returning\n");
}
int main(){
    functionA();
    return 0;
}
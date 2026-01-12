#include <stdio.h>

void func1(){
    printf("fucking Topu\n");
    func1();
}
int main(){
   printf("i am Topu\n");
    func1();
    return 0;
}
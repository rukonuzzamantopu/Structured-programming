#include <stdio.h>
int main(){
    int a = 10;
    int *p = &a;
    printf("%d\n", a);
    printf("Value of a: %d\n", *p);
    printf("Address of a: %p\n", &a);
    printf("Address stored in pointer p: %p\n", &p);
    return 0;
}
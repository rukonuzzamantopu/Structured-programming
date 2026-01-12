#include <stdio.h>

void modifyValue(int a)
{
    a = 50; 
    printf("Value inside modifyValue: %d\n", a);
    
}
int main()
{
    int a = 20;
    int b = a; 
    b = 30;
    modifyValue(b);               
    printf("Value of a: %d\n", a); 
    printf("Value of b: %d\n", b); 
    return 0;
}
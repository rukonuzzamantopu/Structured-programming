#include <stdio.h>

void modifyValue(int* p)
{
    *p = 50; 
  
    
}
int main()
{
    int a = 20;
   
    modifyValue(&a);               
    printf("Value of a: %d\n", a); 

    return 0;
}
#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a>100){
        printf("Greater than 100\n");
    }
    else if(a>50){
        printf("Greater than 50 but less than or equal to 100\n");
    }
    else if (a>20)
    {
        printf("Greater than 20 but less than or equal to 50\n");
    }
    
    else{
        printf("Less than or equal to 20\n");
    }
    return 0;
}
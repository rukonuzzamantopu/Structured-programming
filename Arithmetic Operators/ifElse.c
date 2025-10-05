#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a>100){
        printf("Greater than 100\n");
    }
    else{
        printf("Less than or equal to 100\n");
    }
    return 0;
}
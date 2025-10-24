#include <stdio.h>
#include <string.h>
int main(){
    char A[100], B[100];
    scanf("%s %s", A, B);

    int value = strcmp(A, B);
    if(value < 0){
        printf("A is less than B\n");
    } else if(value > 0){
        printf("A is greater than B\n");
    } else {
        printf("A is equal to B\n");
    }
    return 0;
}
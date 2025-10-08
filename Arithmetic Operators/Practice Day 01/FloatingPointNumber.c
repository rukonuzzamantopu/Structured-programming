// In this problem you will be given a floating point number x. You have to print x upto 3 decimal points.

#include <stdio.h>  
int main() {
    float x;
    // printf("Enter a floating point number: ");
    scanf("%f", &x);

    printf("%.3f", x);

    return 0;
}
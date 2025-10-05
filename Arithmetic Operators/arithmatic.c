#include <stdio.h>

int main(){
    float a=5;
    int b=10;
    int sum = a + b;
    printf("Sum: %d\n", sum);
    float sub = b - a;
    printf("Subtraction: %.2f\n", sub);
    float mul = a * b;
    printf("Multiplication: %.2f\n", mul);
    float div = b / a;
    printf("Division: %.2f\n", div);
    return 0;
}
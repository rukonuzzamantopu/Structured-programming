#include <stdio.h>
int main (){
    int A;
    long long B;
    float C;
    char D;

    scanf("%d %lld %f %c", &A, &B, &C, &D);
    printf("%d\n%lld\n%.2f\n%c\n", A, B, C, D);

    return 0;
}
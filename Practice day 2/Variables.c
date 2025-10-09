// You've learned about variables, right? Now its time to practice them. You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.
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
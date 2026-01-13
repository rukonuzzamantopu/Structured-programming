#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    long long int A[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &A[i]);
    }

    int count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++){
        if(A[i] % 2 == 0 ){
            count1++;
        } else if(A[i] % 2 == 0 && A[i]%3 == 0){
            count1++;
        } else if (A[i]%3 == 0) {
            count2++;
        }
    }
    printf("%d %d", count1, count2);
   
    return 0;
}
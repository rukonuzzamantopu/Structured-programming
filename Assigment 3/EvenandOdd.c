#include <stdio.h>

void odd_even(){
    int n;
    int even = 0;
    int odd = 0;
    scanf("%d",&n);
    int ar[n];

    for(int j = 0; j<n; j++){
        scanf("%d",&ar[j]);
    }

    for(int i = 0; i<n; i++){
        if(ar[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d",even, odd);
}

int main() {

    odd_even();
    return 0;
}
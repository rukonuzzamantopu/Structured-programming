
#include <stdio.h>

int count_before_one(int ar[], int l){
    int c =  0;
    for(int i = 0; i<l; i++){
        if(ar[i] == 1){
            return c;
        }
        c++;
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i = 0; i<n; i++){
        scanf("%d",&ar[i]);
    }

    int result = count_before_one(ar,n);
    printf("%d", result);

    return 0;
}

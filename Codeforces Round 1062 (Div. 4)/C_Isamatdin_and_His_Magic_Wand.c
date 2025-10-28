#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        long long int a;
        scanf("%lld", &a);
        long long int arr[a];
        for (int i = 0; i < a; i++){
            scanf("%lld", &arr[i]);

        }
    return 0;
}
}
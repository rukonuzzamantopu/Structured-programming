#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int x;
    scanf("%d", &x);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int found = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == x){
                found = 1;
                break;
            }

        }
    }
    if(found){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
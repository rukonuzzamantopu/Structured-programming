#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == min){
            arr[i] = max;
        } else if(arr[i] == max){
            arr[i] = min;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter the size of the array: ");
    scanf("%d", &n);  
    int arr[n];
    printf("Enter %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Frequency of each element:\n");
    for(i = 0; i < n; i++) {
        if(arr[i] == -1)
            continue;
        
        count = 1;
       
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        printf("%d occurs %d times\n", arr[i], count);
    }  
    return 0;
}

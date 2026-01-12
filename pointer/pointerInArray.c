#include <stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    printf("%p\n",arr);
    printf("%d\n",*arr);

    return 0;
}
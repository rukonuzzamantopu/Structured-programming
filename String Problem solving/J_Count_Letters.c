#include <stdio.h>
int main(){
  char arr[10000001];
    scanf("%s",arr);
    int freq[256]={0};
    for(int i=0;arr[i]!='\0';i++){
        freq[arr[i]]++;
    }

    for(int i=0;i<256;i++){
        if(freq[i]>0){
            printf("%c : %d\n", i, freq[i]);
        }
    }

    return 0;
}
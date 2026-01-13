#include <stdio.h>
int main(){
    int n;
    int max=0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        int valo;
        scanf("%d", &valo);

        if(valo>max){
            max=valo;
        }
}
  printf("%d\n", max);
  return 0;
}
     

#include <stdio.h>

int main()
 {
    int num,sum,count;
    count=1,sum=0;
    do{
       scanf("%d",&num);
        sum=sum+num;
        count++;
    }while(count<= 10);
printf("result= %d\n",sum);
return 0;
}
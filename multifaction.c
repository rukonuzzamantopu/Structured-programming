#include<stdio.h>
int main()
{
int A[100][100], B[100][100], C[100][100];
int i, j, k, rA, cA, rB, cB;
int sum;
    printf("Number of rows and colums in A:");
    scanf("%d %d",&rA,&cA);
    printf("Number of rows and colums in B:");
    scanf("%d %d",&rB,&cB);

if(cA != rB)
{
printf("Invalid matrix dimensions\n");
return 0;
}

for(i=0;i<rA;i++){
    for(j=0;j<cA;j++){
    printf("A[%d][%d]: ",i, j);
    scanf("%d",&A[i][j]);}
}
printf("\n");
for(i=0;i<rB;i++){
    for(j=0;j<cB;j++){
    printf("B[%d][%d]: ",i, j);
    scanf("%d",&B[i][j]);}
}

for(i=0;i<rA;i++){
    for(j=0;j<cB;j++){
    sum = 0;
    for(k=0;k<cA;k++){
    sum += A[i][k]*B[k][j];
    C[i][j] = sum;}}
}

printf("Result:\n");
for(i=0;i<rA;i++){
    for(j=0;j<cB;j++){
    printf("%10d",C[i][j]);}
printf("\n");
}

return 0;
}
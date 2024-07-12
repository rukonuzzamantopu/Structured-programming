#include <stdio.h>
int main() {
int ar[10][1][3] = {
{{13,25,0}},
{{6,1,22}},
{{15,21,18}},
{{1,20,5}},
{{0,8,5}},
{{22,25,0}},
{{9,19,0}},
{{20,18,1}},
{{22,5,12}},
{{9,14,7}}
};
int mat[3][3] = {
{1, -1, 1},
{1, 1, 0},
{1, 2, 1}
};
int result[10][3];
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 1; j++) {
for (int k = 0; k < 3; k++) {
int sum = 0;
for (int l = 0; l < 3; l++) {
sum += ar[i][j][l] * mat[l][k];
}
result[i][k] = sum;
}
}
}
printf("Encoded message:\n\n");
for (int i = 0; i < 10; i++) {
for (int j = 0; j < 3; j++) {
printf("%d ", result[i][j]);
}
}
printf("\n");
return 0;
}

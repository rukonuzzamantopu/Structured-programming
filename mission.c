#include <stdio.h>
int main() {
int ar[11][1][2] = {
{{4, 15}},
{{0, 25}},
{{15, 21}},
{{18, 19}},
{{5, 12}},
{{6, 0}},
{{16, 5}},
{{18, 6}},
{{5, 3}},
{{20,12}},
{{25,0}}
};
int mat[2][2] = {
{1, 2},
{1, 3}
};
int result[11][2];
for (int i = 0; i < 11; i++) {
for (int j = 0; j < 1; j++) {
for (int k = 0; k < 2; k++) {
int sum = 0;
for (int l = 0; l < 2; l++) {
sum += mat[k][1] * ar[i][j][l];
}
result[i][k] = sum;
}
}
}
printf("Encoded message:\n\n");
for (int i = 0; i < 11; i++) {
for (int j = 0; j < 2; j++) {
printf("%d ", result[i][j]);
}
}
printf("\n");
return 0;
}

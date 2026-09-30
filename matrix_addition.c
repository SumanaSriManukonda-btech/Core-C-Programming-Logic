#include <stdio.h>
int main() {
  int i, j, rows, cols;
  //getting input from user(number of rows and colums that user want)
printf("Enter number of rows and columns: ");
scanf("%d %d", &rows, &cols);
int a[rows][cols], b[rows][cols], sum[rows][cols];
  //getting the matrix-1(here, matrix a[][]) elements from the user
printf("Enter elements into matrix-1: ");
for(i=0; i<rows; i++) {
for(j=0; j<cols; j++) {
scanf("%d", &a[i][j]);
}
}
  //getting the matrix-2(here, matrix b[][]) elements from the user
printf("Enter elements into matrix-2: ");
for(i=0; i<rows; i++) {
for(j=0; j<cols; j++) {
scanf("%d", &b[i][j]);
}
}
  //printing the matrix-1
printf("matrix-1:\n");
for(i=0; i<rows; i++) {
for(j=0; j<cols; j++) {
printf("%d ", a[i][j]);
}
  printf("\n");
}
  //printing the matrix-2
printf("matrix-2:\n");
for(i=0; i<rows; i++) {
for(j=0; j<cols; j++) {
printf("%d ", b[i][j]);
}
  printf("\n");
}
  //logic that performs the addition operation
for(i=0; i<rows; i++) {
for(j=0; j<cols; j++) {
sum[i][j] = a[i][j] + b[i][j];
}
}
  //printing the final result i.e., the addition of two matrices
printf("The resultant of sum of two matrices is:\n");
for(i=0; i<rows; i++) {
for(j=0; j<cols; j++) {
printf("%d ", sum[i][j]);
}
printf("\n");
}
return 0;
}

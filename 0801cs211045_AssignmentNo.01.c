#include <stdio.h>
int main() {
  int r, c, a[10][10], b[10][10], sum[10][10], sub[10][10] ,  i, j;
  printf("Enter the number of rows (between 1 and 10): ");
  scanf("%d", &r);
  printf("Enter the number of columns (between 1 and 10): "); 
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

    // subtracting two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sub[i][j] = a[i][j] - b[i][j];
    }


  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      }
      printf("\n");
    }


    // printing the result
  printf("\nDifference of two matrices: \n");
  for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      printf("%d   ", sub[i][j]);
      }
      printf("\n");
    }


    // TRACE
    int trace_a=0;
    int trace_b=0;
    for (i = 0; i < r; ++i){
    for (j = 0; j < c; ++j) {
      if(i==j){
        trace_a+=a[i][j];
        trace_b+=b[i][j];
      }
      }
    }
    printf("TRACE of Matrix a is : %d\n",trace_a);
    printf("TRACE of Matrix b is : %d",trace_b);

  return 0;
}
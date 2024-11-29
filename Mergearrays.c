// Online C compiler to run C program online
#include<stdio.h>
int main()
{
  int rows,cols;
  printf("Enter the number of rows and columns:");
  scanf("%d%d",&rows,&cols);
  int a[rows][cols],b[rows][cols],merge[rows][cols];
  printf("Enter the elements of matrix a:");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter the elements of matrix b:");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      scanf("%d",&b[i][j]);
    }
  }
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      merge[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("resultant matrix:");
  for(int i=0;i<rows;i++){
    for(int j=0;j<cols;j++){
      printf("%d",merge[i][j]);
    }
    printf("\n");
  }
  return 0;
}

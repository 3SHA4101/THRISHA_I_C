#include <stdio.h>
int add(int a,int b)
{
  return a+b;
}
int main()
{
  int result=add(3,1);
  printf("result=%d",result);
  return 0;
}

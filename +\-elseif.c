#include <stdio.h>
int main() 
{
  float a;
  printf("enter the value of a\n");
  scanf("%f",&a);
  if(a>0)
  {
      printf("%f is positive",a);
  }
    else if(a<0)
    {
      printf("%f is negative",a);
    }
  else
  {
    printf("%f is zero",a);
  }
  return 0;
}

#include <stdio.h>
int main() 
{
  float a,b;
  printf("enter the value of a and b\n");
  scanf("%f%f",&a,&b);
  if(a>b)
  {
      printf("%f is greater than %f",a,b);
  }
    else 
    {
      printf("%f is lesser than %f",a,b);
    }
  return 0;
}

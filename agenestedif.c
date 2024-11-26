#include <stdio.h>
int main(void) 
{
  int age;
  printf("enter the age\n");
  scanf("%d",&age);
  if(age>=30)
  {
    if(age<=40)
    {
      printf("you are eligible for exam\n");
    }
    else
      printf("you are not eligible for exam\n");
    return 0;
  }
}

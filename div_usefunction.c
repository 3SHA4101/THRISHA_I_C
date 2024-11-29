#include <stdio.h>
#include<math.h>
float dev(float a,float b){
    return a/b;
}
int main()
{
    float num1,num2;
    printf("enter the 2 numbers\n");
    scanf("%f%f",&num1,&num2);
    printf("devision(by Thrisha):%f\n",dev(num1,num2));
    return 0;
}

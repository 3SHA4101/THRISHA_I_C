#include <stdio.h>
int mult(int a,int b){
    return a*b;
}
int main()
{
    int num1,num2;
    printf("enter the 2 numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("multiplication(by Thrisha):%d\n",mult(num1,num2));
    return 0;
}
    

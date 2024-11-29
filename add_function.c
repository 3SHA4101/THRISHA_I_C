#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int main()
{
    int num1,num2;
    printf("enter the 2 numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("add(by Thrisha):%d\n",add(num1,num2));
    return 0;
}
    

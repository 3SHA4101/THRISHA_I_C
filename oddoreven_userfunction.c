#include <stdio.h>
#include<math.h>
int iseven(int a){
    return a%2==0;
    }
    int main()
{
    int num;
    printf("enter the  number\n");
    scanf("%d",&num);
    if(iseven(num)){
        printf("%d is the even number(by Thrisha)",num);
    }
    else{
        printf("%d  is odd  number(by Thrisha)",num);
    }
    return 0;
}
    
    

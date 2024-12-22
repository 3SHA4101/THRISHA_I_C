#include<stdio.h>
int fibanacci(int i);
int main()
{
    int n,i=0,res;
    printf("enter the numbers of terms");
    scanf("%d",&n);
    printf("FIBANACCI SERIES");
    for(i=0;i<n;i++)
    { 
        res=fibanacci(i);
    printf("%d",res);
    }
return 0;
}
int fibanacci(int i)
{
if(i==0)
return 0;
else if(i==1)
return 1;
else
return(fibanacci(i-1)+fibanacci(i-2));
}

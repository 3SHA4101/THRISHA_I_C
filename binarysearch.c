#include<stdio.h>
#include<stdlib.h>
void main()
{
    int low,high,mid,key,n,i;
    int a[20];
    printf("enter the numbers of elements");
    scanf("%d",&n);
    printf("enter %d numbers in ascending order/n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the number to be search");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
 mid=(low+high)/2;
        if(key==a[mid])
        {
            printf("key %d is found at the position %d /n",key,mid+1);
            return;
        }
        else if((key>a[mid])>0)
        low=mid+1;
        else
        high=mid-1;
}
printf("number not found");
}





       




       



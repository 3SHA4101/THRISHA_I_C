#include <stdio.h>
    int main()
{
    int n, even=0,odd=0;
    printf("enter the number of elenments: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        even++;
    else
        odd++;
    }
    printf("Even numbers:%d\n", even);
    printf("odd number:%d\n",odd);
    return 0;
}
   

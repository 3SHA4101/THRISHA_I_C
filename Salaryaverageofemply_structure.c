#include<stdio.h>
struct Emply{
    char name[50];
    int id;
    int salary;
};
int main()
{
    int n;
    float totalsalary=0, averagesalary;
    printf(" enter the total number of employees");
    scanf("%d",&n);
    struct Emply e[n];
    for(int i=0;i<n;i++){
        printf("enter the name");
        scanf("%s",&e[i].name);
        printf("Enter the id");
        scanf("%f",&e[i].id);
        printf("Enter salary");
        scanf("%f",&e[i].salary);
    }
    averagesalary=totalsalary/n;
    
    printf("%d is the averagesalary of empoyees",averagesalary);
    return 0;
}

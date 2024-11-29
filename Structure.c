


#include<stdio.h>
struct student
{
    char name;
    int roll;
    float marks;
};
int main()
{
    struct student s1;
    printf(" Enter the name");
    scanf("%s",&s1.name);
    printf("Enter the roll number");
    scanf("%d",&s1.roll);
    printf("Enter the marks");
    scanf("%f",s1.marks);
    printf("\n student details\n");
    printf("\name:%c\nroll number:%d\nmarks:%f\n",s1.name,s1.roll,s1.marks);
    return 0;
}

// Online C compiler to run C program online
#include<stdio.h>
struct student
{
    char name;
    int age;
    char gender;
    char department;
    char clg;
};
int main()
{
    struct student s1;
    printf(" Enter the name");
    scanf("%s",&s1.name);
    printf("Enter the age");
    scanf("%s",&s1.age);
    printf("Enter the gender");
    scanf("%s",s1.gender);
    printf(" Enter the department name");
    scanf("%s",&s1.department);
    printf("Enter the college name");
    scanf("%s",&s1.clg);
    printf("\nstudent details\n");
    printf("\nname:%s\nage:%d\ngender:%s\ndepartment:%s\ncollege name:%s",s1.name,s1.age,s1.gender,s1.department,s1.clg);
    return 0;
}

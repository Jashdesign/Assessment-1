#include<stdio.h>
#include<string.h>

struct perInfo{
    char name[50];
    int age;
};

struct Info{
    struct perInfo a;
    char designation[50];
    int salary;
};


void main(){
    struct Info b;
    printf("Enter your name: ");
    scanf("%s",&b.a.name);
    printf("Enter your age: ");
    scanf("%d",&b.a.age);
    printf("Enter your Designation: ");
    scanf("%s",&b.designation);
    printf("Enter your Salary: ");
    scanf("%d",&b.salary);

    printf("Name: %s\nAge: %d\nDesignation: %s\nSalary: %d",b.a.name,b.a.age,b.designation,b.salary);
}
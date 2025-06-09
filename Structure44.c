#include<stdio.h>
#include<string.h>
//1. Define a structure Employee with member variable id, name, salary
struct Employee
{
    int id;
    char name[20];
    int salary;
} ;
int A1()
{
    struct Employee a={1,"Santosh",45000};
    printf("%d ",a.salary);
    printf("%s",a.name);
    return 0;
}
//2. Write a function to take input employee data .[Refer structure from Question 1]
int A2()
{
    struct Employee b;
    printf("Enter Employee id, name, salary");
    scanf("%d",&b.id);
    fflush(stdin);
    fgets(b.name,20,stdin);
    b.name[strlen(b.name)-1]='\0';
    //strcpy(b.name,"mamu");
    scanf("%d",&b.salary);
    printf("Employee id %d\n",b.id);
    printf("Salary of Employee: %d\n ",b.salary);
    printf("Name of Employee: %s\n",b.name);
    return 0;
}
//3. Write a function to display employee data. [Refer structure from the question 1]
struct Employee input()
{
    struct Employee a;
    printf("Enter Employee id, name, salary:\n");
    scanf("%d",&a.id);
    fflush(stdin);
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    scanf("%d",&a.salary);
    return a;
}
void Display()
{
    struct Employee b=input();
    //struct Employee b;
    printf("Employee id: %d, Employee Name: %s, Employee Salary: %d",b.id,b.name,b.salary);
}
int A3()
{
    void Display();
    struct Employee input();
    struct Employee c;
    Display();
    

    return 0;

}
//4. Write a function to find highest salary employee from the give array of 10 employee.[refer structure from question 1]
void Employee()
{
    int a;
    printf("Enter total number of employees");
    struct Employee A[a];
    struct Employee B;
    printf("Enter %d employee's id, name, salary:\n",a);
    for(int i=0;i<10;i++)
    {
        A[i]=B.id;
        A[i]=fgets(B.name,20,stdin);
        A[i]=B.salary;
    }
    for(int i=0;i<10;i++)
    {
        if(A[i]=B.salary)
    }
}
#include<stdio.h>
//write a program to calculate the sum of the number stored in array of size 10. Take array value from the user
int A1()
{
    int sum=0;
    int A[10];
    printf("Enter 10 number of a Array");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int j=0;j<10;j++)
    {
        printf("%d ",A[j]);
        sum=sum+A[j];
    }
    printf("\nSum of Array:%d",sum);
    return 0;
}
//2.Write a program to calculate average of number stored in array of size 10. Take array value from the user
int A2()
{
    int sum=0;
    float  average;
    int A[10];
    printf("Enter 10 number of a Array");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int j=0;j<10;j++)
    {
        printf("%d ",A[j]);
        sum=sum+A[j];
    }
    average=sum/10.0;
    printf("Array Average:%f",average);
}
//3.Write a program to calculate the sum of all even numbers and sum of all odd numbers. Whice are stored in array of size 10. Take value from the user

int A3()
{
    int Esum=0;
    int Osum=0;
    
    int A[10];
    printf("Enter 10 number of a Array");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int j=0;j<10;j++)
    {
        if(A[j]%2==0)

        {
            printf("%d ",A[j]);
            Esum=Esum+A[j];
        }
        else
        {
            printf("%d ",A[j]);
            Osum=Osum+A[j];
        }
}
    
    printf("Sum of Even Array element:%d",Esum);
    printf("\nSum of Odd Array element:%d",Osum);
}
//4.Write a program to find the greater number stored in an array of size 10.Take array value from the user.
int GreaterArray()
{
    int i,j,A[10];
    printf("Enter 10 Element:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=0;j<9;j++)
    {
        if(A[j]>A[j+1])
            A[j+1]=A[j];
        else
            A[j]=A[j];
    }
    printf("Greater Number of Array %d ",A[j]);
}
int A4()
{
    GreaterArray();
    return 0;
}
//4. Write a program to find smallest number stored in array of size 10. Take array value from the user.
int SmallestArray()
{
    int i,j,A[10];
    printf("Enter 10 Element:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
    }
    for(j=9;j>0;j--)
    {
        if(A[j]<A[j-1])
            A[j-1]=A[j];
        else
            A[j]=A[j];
    }
    printf("Smallest Number of Array %d ",A[j]);
}
int main()
{
    SmallestArray();
    return 0;
}
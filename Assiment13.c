#include<stdio.h>
/*---------USE OF ANY LOOP-----------*/
//1.Write a program to calculate sum of first N natural numbers
int A1()
{
    int i=1;
    int N,sum=0;
    printf("Enter Number ");
    scanf("%d",&N);
    for(i;i<=N;i++)
    {
        
            sum=sum+i;
    }
    if(i>N)
    {
        printf("%d",sum);
    }
    return 0;

}
//2.Write a program to calculate sum of first N even natural number
int A2()
{
    int i=1;
    int sum=0;
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    for(i;i<=N;i++)
    {
        if (i%2==0)
        sum=sum+i;
        
    }
    if(i>N)
    {
        printf("%d",sum);
    }
    return 0;
}
//3.Write a program to calculate sum of first N odd natural numbers

int A3()
{
    int i=1;
    int sum=0;
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    for(i;i<=N;i++)
    {
        if (i%2!=0)
        sum=sum+i;
        
    }
    if(i>N)
    {
        printf("%d",sum);
    }
    return 0;
}
//4.Write a program to calculate sum of square of first N natural numbers

int A4()
{
    int i=1;
    int sum=0;
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    for(i;i<=N;i++)
    {
        
        sum=sum+i*i;
        
    }
    if(i>N)
    {
        printf("%d",sum);
    }
    return 0;
}
//5.Write a program to calculate sum of cube of first N natural number

int main()
{
    int i=1;
    int sum=0;
    int N;
    printf("Enter N:");
    scanf("%d",&N);
    for(i;i<=N;i++)
    {
        
        sum=sum+i*i*i;
        
    }
    if(i>N)
    {
        printf("%d",sum);
    }
    return 0;
}
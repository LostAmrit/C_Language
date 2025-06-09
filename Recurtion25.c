#include<stdio.h>
//1.Write a function to print N natural number
double Natural(int);
int A1()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    Natural(n);
    return 0;
}
double Natural(int N)
{
    if (N>0)
    {
        Natural(N-1);
        printf(" \n%d",N);
    }
    
         
    
}
//Write a recursive function to print N Natural number in reverse order
void NaturalReverce(int);
int main()
{
    int n=1;
    
    NaturalReverce(n);
    return 0;
}
void NaturalReverce(int N)
{
    int t;
    if(N<2)
    {
        printf("Enter last  Number");
        scanf("%d",&t);
    }
    printf("%d\n",t);
    if (N<=t)
    {
        NaturalReverce(N+1);
        printf(" \n%d",N);
    }
    
         
    
}
//3. Write a recurcive function to print first N odd number
void OddNatural(int);
int A3()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    OddNatural(n);
    return 0;
}
void OddNatural(int N)
{
    if (N>0)
    {
        if(N%2==0)
        {
            OddNatural(N-1);
            //if(N%2==0)
            //printf(" \n%d",N);
        }
        else
        {
            OddNatural(N-1);
            printf(" \n%d",N);
        }
    }
}
//4. Write a recurtive function to print first N odd number in reverce order
void OddNaturalReverce(int,int);
int A4()
{
    int a;
    printf("Enter last number");
    scanf("%d",&a);
    OddNaturalReverce(1,a);
    
    return 0;
}
void OddNaturalReverce(int N,int A)
{
    // if (N<2)
    // {
    //     int a;
    //     printf("Enter last number");
    //     scanf("%d",&a);
    // }
        if(N<=A)
        {
        if(N%2==0)
        {
            OddNaturalReverce(N+1,A);
            //if(N%2==0)
            //printf(" \n%d",N);
        }
        else
        {
            OddNaturalReverce(N+1,A);
            printf(" \n%d",N);
        }
        }
    }
//5.Write a recursive function to print even natural number
void EvenNatural(int);
int A5()
{
    int a;
    printf("Enter last number");
    scanf("%d",&a);
    EvenNatural(a);
    
    return 0;
}
void EvenNatural(int N)
{
    
        if(N>0)
        {
        EvenNatural(N-1);
        if(N%2==0)
        {
            printf("%d\n",N);
        }
        }
    }
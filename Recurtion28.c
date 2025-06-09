#include<stdio.h>
//1.Write a recursive function to calculate factorial of given number
int factorial(int N)
{
    if(N!=1)
    {
        return N*factorial(N-1);
    }
}
int A1()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    printf("Factorial of N:%d",factorial(n));
    return 0;
}
//2.Write a recursive function to calculate HCF of two number
int HCF(int N,int n)
{
    // if(N!=0||n!=0)
    // {int i;
    // HCF(N-1,n-1);
    // printf("%d",i=N<n?N%N==0&&N%n==0:n%N==0&&n%n==0);
    // return 1;}
    for(int i=N<n?N:n;i>0;i--)
    {
        if (N%i==0&&n%i==0)
        {
            return i;
        }

    }
    
}
int main()
{
    int N,n;
    printf("Enter two Number");
    scanf("%d%d",&N,&n);
    printf("HCF is:%d",HCF1(N,n));
    return 0;
}
int HCF1(int N,int n)
{
    if(n!=0){
    int i;
    int j;
    HCF1(i=N<n?N--:n--,j=n<N?n--:N--);
    if(N%i==0&&n%i==0)
    {
        return i;
    }
    }
}
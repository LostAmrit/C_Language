#include<stdio.h>
//1.Write a recursive function to print N Enen natural number in reverce order
void EvenNaturalReverce(int,int);
int A1()
{
    int a;
    printf("Enter last number");
    scanf("%d",&a);
    EvenNaturalReverce(1,a);
    
    return 0;
}
void EvenNaturalReverce(int N,int A)
{
    
        if(N<=A)
        {
        EvenNaturalReverce(N+1,A);
        if(N%2==0)
        {
            printf("%d\n",N);
        }
        }
} 
//2.Write a recursive function to print square of first N natural number

void SquareNatural(int N)
{
    if(N>0)
    {
    SquareNatural(N-1);
    printf("%d\n",N*N);
    }
}
int main()
{
    int n;
    printf("Enter last Number");
    scanf("%d",&n);
    SquareNatural(n);
    return 0;
}
//3.Write a recrsive function to brint binary of a given decimal number
void DecimalToBinary(int N)
{
    if(N!=0)
    {
        DecimalToBinary(N/2);
        if(N%2==1)
        {
            printf("%d",1);
        }
        else{
            printf("%d",0);
        }
    }
}
int A3()
{
    int n;
    printf("Enter Decimal Number");
    scanf("%d",&n);
    DecimalToBinary(n);
    return 0;
}
//4.Write a recursive function to print octal of a given decimal number
void DecimalToOctal(int N)
{
    if(N!=0)
    {
        DecimalToOctal(N/8);
        int p=N%8;
        printf("%d",p);
        
    }
}
int A4()
{
    int n;
    printf("Enter Decimal Number");
    scanf("%d",&n);
    DecimalToOctal(n);
    return 0;
}
//5.Write a recursive function to print reverce of a given number
void ReverceNumber(int N)
{
    int count=1;
    int c=1;
    int Num=0;
    if(N!=0)
    {
        ReverceNumber(N/10);
        printf("%d",N%10);
    }
}
int A5()
{
    int n;
    printf("Enter  Number");
    scanf("%d",&n);
    ReverceNumber(n);
    return 0;
}
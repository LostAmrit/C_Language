#include<stdio.h>
//1.Write a recursive function to sum of n natural number
int AddNatural(int N)
{
    if(N!=0)
    {
        return N+AddNatural(N-1);
        //return result;
    }
}
int A1()
{
    int n;
    printf("Enter Number");
    scanf("%d",&n);
    printf("%d",AddNatural(n));
    return 0;
}
//2.Write a recursive function to calculate sum of N odd natural number
int AddOddNatural(int N)
{
    if(N!=0)
    {
        if (N%2!=0)
        {
        return N+AddOddNatural(N-1);
        //return result;
        }
        else
            AddOddNatural(N-1);
    }
}
int A2()
{
    int n;
    printf("Enter Number");
    scanf("%d",&n);
    printf("%d",AddOddNatural(n));
    return 0;
}
//3.Write a recursive function to calculate sum of N Even natural number
int AddEvenNatural(int N)
{
    if(N!=0)
    {
        if (N%2==0)
        {
        return N+AddEvenNatural(N-1);
        //return result;
        }
        else
            AddEvenNatural(N-1);
    }
}
int A3()
{
    int n;
    printf("Enter Number");
    scanf("%d",&n);
    printf("%d",AddEvenNatural(n));
    return 0;
}
//4.Write a recursive function to calculate sum of N Even natural number
int AddSquareNatural(int N)
{
    if(N!=0)
    {
        return N*N+AddSquareNatural(N-1);
        //return result;
    }
}
int A4()
{
    int n;
    printf("Enter Number");
    scanf("%d",&n);
    printf("%d",AddSquareNatural(n));
    return 0;
}
//4.Write a recursive function to calculate sum of digit of a given  number
int SumDigits(int N, int sum)
{
    if (N>0)
    {
        return N%10+SumDigits(N/10,sum);
        //sum=sum+(N%10);
        
        
    }
}
int main()
{
    int n;
    printf("Enter Number");
    scanf("%d",&n);
    int sum=0;
    printf("%d",SumDigits(n,sum));
    return 0;
}
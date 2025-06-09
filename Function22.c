#include<stdio.h>
//1.write a function to calculate factorial of a number (TSRS)
int Factorial(int);
int A1()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("%d",Factorial(n));
    return 0;   
}
int Factorial(int N)
{
    int sum=1;
    for(int i=N;i!=0;i--)
    {
        sum=sum*i;
    }
    return sum;
}
//2.Write a function to calculate the number of combinations one can make from n items and r selected at a time (TSRS)
//3.Write a function to calculate the number of arrangement one can make from n items and r selected at a time (TSRS)
double Arrangement(int,int);
int main()
{
    int n,r;
    printf("Enter number of item & number of way to select");
    scanf("%d%d",&n,&r);
    printf("Possible Arrengement:%lf",Arrangement(n,r));
    return 0;
}
double Arrangement(int N,int R)
{
    int sum1=1;
    int sum2=1;
    int sum3=1;
    for(int i=N;i!=0;i--)
    {
        sum1=sum1*i;
        for(int j=N-R;j!=0;j--)
        {
            sum2=sum2*j;
            for(int k=R;k!=0;k--)
            {
               sum3=sum3*k;
            }
        }
       
    }
    printf("%d\n",sum1);
    printf("%d\n",sum2);
    printf("%d\n",sum3);
    double Sum=sum1/(sum2*sum3);
    return Sum;
}
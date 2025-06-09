#include<stdio.h>
//1.Write a function to calculate LCM of two number. (TSRS)
int LCM(int a,int b)
{
    if(a<b)
    {
        for(int i=a;i<=(a*b);i++)
        {
            if((i%a==0)&&(i%b==0))
            {
                return i;
            }
        }
        //return i;
    }
    else
    {
        for(int j=b;j<=(a*b);j++)
        {
            if((j%a==0)&&(j%b==0))
            {
                return j;
            }
        }
        //return j;
    }
    
}
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    int s;
    s=LCM(a,b);
    printf("LCM is : %d",s);
}
//2.Write a function to calculate HCF of given number. (TSRS)
int Hcf(int A,int B)
{
    for(int i=A<B?A:B;i>=1;i--)
    {
        if(A%i==0&&B%i==0)
        {
            return i;
        }
    }
}
int A2()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    printf("HCF %d",Hcf(a,b));
}
//3.Write a function to check whether a given number is prime or not. (TSRS)
int prime(int A)
{
    int i;
    for(i=2;i<A;i++)
    {
        if(A<=1)
        {
            return 0;
        }
        else if(A%i==0)
        {
            return 0;
        }
        
    }
    if(A==i)
    {
        return i;
    }
}
int A3()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    int k=prime(a);
    if(k)
        printf("Prime Number %d\n",k);
    else 
        printf("Non prime Number %d",a);
    return 0;
}
//4.Write a functionto find the next prime number of a given number.(TSRS)
int NextPrime(int A)
{
    int i;
    for(i=2;i<A;i++)
    {
        if(A<=1)
        {
            return 0;
        }
        else if(A%i==0)
        {
            return 0;
        }
        
    }
    if(A==i)
    {
        return i;
    }
}
int A4()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    a++;
    while(a){
    int k=NextPrime(a);
    if(k)
        printf(" Next Prime Number %d\n",k);
        break;
    a++;
    }
    return 0;
}
//5.Write a function to print first N prime number
int Prime1(int A)
{
    int i;
    for(i=2;i<A;i++)
    {
        if(A<=1)
        {
            return 0;
        }
        else if(A%i==0)
        {
            return 0;
        }
        
    }
    if(A==i)
    {
        return i;
    }
}
int A5()
{
    int a,b;
    a=1;
    printf("Enter a Last Number");
    scanf("%d",&b);
    while(a<=b){
    int k=Prime1(a);
    if(k)
        printf("%d\n",k);
        
    a++;
    }
    return 0;
}
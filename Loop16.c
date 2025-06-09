#include<stdio.h>
//1.Write a program to find the Nth term of the Fibonacci series
int A1()
{
    int a=0,b=1;
    int n=1;
    while(n<=20)
    {
        int z=a+b;
        printf("%d\n",z);
        a=b;
        b=z;
        n++;
    }
    return 0;
}
//Write a program to print first N term of Fibonacci series
//3.Write a program to check whether a given number is there in a fibonacci series or not.
//4.Write a program to check whether a given number is an Armstrong or not
int A4()
{
    int N;
    printf("Enter a Number");
    scanf("%d",&N);
    int count=0;
    int k=0,p=1;
    int n=N;
    int s=N;
    while(N)
    {
        N=N/10;
        count++;                            //INCOMPLETE
    }
    while(n)
    {
    while(count)
    {
        p*=n%10;
        count--;
    }
        k=k+p;
        n=n/10;
    } 
    printf("%d\n",p);
    printf("%d",k);
    if(k==s)
    {
        printf("Armstrong Number %d",s);
    }
    else
    {
        printf("Non Armstrong Number %d",s);
        
    }
    return 0;
}
//5.Write a program to print all Armstrong number under 1000
int main()
{
    int N=153;
    while(N<=153)
    {
    int count=0;
    int k=0;
    int n=N;
    int p=1;
    int d=n;
    while(d>0)
    {                                   //INCOMPLETE
        d=d/10;
        count++;
        
    }
    while(n>0)
    {
        for(count;count>0;count--)
            p=p*(n%10);   
        
        k=k+p;
        //printf("power %d\n",p);
        n=n/10;
    }
    //printf("\n%d",p);

    if(k==N)
    {
        printf("%d\n",N);
    }
    
    N++;
    }
    return 0;
}
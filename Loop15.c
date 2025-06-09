#include<stdio.h>
//1.Write a program to print all prime number under 100
int IsPrime(int N)
{
    if(N<=1)
        {
            return 0;
        }
    else
    {
        for(int i=2;i<N;i++)
        {
        if(N%i==0)
        {
            return 0;
        }
        
        }
    return 1;
    }
    
}
int A1()
{
    int N;
    int count=0;
    printf("Enter a Number");
    scanf("%d",&N);
    while (N<=100){if(IsPrime(N))
    {
        printf("%d\n",N);
        count=count+1;
    }
    N++;
    }
    printf("count%d",count);
    return 0;
}
//2.Write a program to print all prime number between two number
int Prime(int N)
{
    if (N<=1)
    {
        return 0;
    }
    else{
        for(int i=2;i<N;i++)
        {
            if(N%i==0)
            {
                return 0;
            }

        }
        return 1;
    }
}
int A2()
{
    int First,Last;
    int count=0;
    printf("Enter a First & Last Number:\n");
    scanf("%d%d",&First,&Last);
    while(First<=Last)
    {
        if(Prime(First))
        {
            printf("%d\n",First);
            count+=1;
        }
        First++;
    }
    printf("Count %d",count);
    return 0;
}
//3.Write a program to find the next prime number of a given number.
int Prime1(int N)
{
    if (N<=1)
    {
        return 0;
    }
    else{
        for(int i=2;i<N;i++)
        {
            if(N%i==0)
            {
                return 0;
            }

        }
        return 1;
    }
}
int A3()
{
    int N;
    printf("Enter a Number:\n");
    scanf("%d",&N);
    N+=1;
    while(N)
    {
        if(Prime1(N))
        {
            printf("%d\n",N);
            break;
        }
        N++;
    }
    
    return 0;
}
//4.Write a program to calculate HCF
int A4()
{
    int a,b;
    printf("Enter a number:\n");
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        for(int i=a;i!=0;i--)
        {
            if(a%i==0&&b%i==0)
            {
                printf("HCF %d",i);
                return 0;
            }
        }
    }
    else{
        for(int i=b;i!=0;i--)
        {
            if(a%i==0 && b%i==0)
            {
                printf("HCF %d",i);
                return 0;
            }
        }
    }
    return 0;
}
//5.Write a program to check whether the two number is co-prime or not.
int CoPrime(int a,int b)
{
    if (a<=1&&b<=1)
    {
        return 0;
    }
    else{
        for(int i=2;i<a&&i<b;i++)
        {
            if(a%i==0||b%i==0)
            {
                return 0;
            }

        }
        return 1;
    }
}
int main()
{
    int a,b;
    printf("Enter two Number:\n");
    scanf("%d%d",&a,&b);
    
        if(CoPrime(a,b))
        {
            printf("%d&%d is Co-Prime Number",a,b);
            
        }
        else
        {
            printf("%d&%d is Non Co-Prime Number",a,b);
        }
    
    
    return 0;
}
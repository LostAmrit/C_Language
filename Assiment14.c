                /*Use any loop*/
#include<stdio.h> 
#include<stdlib.h> 
//1.Write a program to calculate factorial of Number
int A1()
{
    int N,result=1;
    printf("Enter  a number:");
    scanf("%d",&N);
    for(int i=N;i!=0;i--)
    {
        // if (i!=0)
             result=result*i;
        // else
        // break;
    }
    printf("%d",result);
    return 0;
}      
//2.Write a progam to count digit of a number
int A2()
{
    int N,count=0;
    printf("Enter a Number");
    scanf("%d",&N);
    while(N)
    {
        if(N=N/10)
            count++;
        else
            count++;
    }
    printf("%d",count);
    return 0;
}
//3.Check whether a number is prime or not
int main()
{
    int N;
    int i=2;
    printf("Enter a Number");
    scanf("%d",&N);
    for(i;i<N;i++)
    {
       if( N%i==0)
       {
            printf("%d is non prime Number",N);
            exit(0);
       }
            //break;
    }
    if (N%i==0)
        printf("%d is prime Number",N);
    
    return 0;
    
}
//4.Write a program to calulate LCM of two number
int A3()
{
    int N=2;
    int a,b;
    int L,C;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    
        int p=a*N;          //incomplet
        int q=b*N;
        if (p>q)
        {
            for(N;N<=p;N++)
        {
            N=a*N;
        }
        printf("LCM is %d",N-1);
        }
        else
        {
            for(N;N<=q;N++)
            {
                N=b*N;
            }
        printf("LCM is %d",N-1);

        }
        

    }
//5.write a program to reverce a given number
int A5()
{
    int N;
    printf("Enter a Number");
    scanf("%d",&N);
    int Reverce;
    int q;
    while(q!=0)
    {                           //INCOMPLET
        q=N/10;
        Reverce=N%10;N=N/10;
        
        printf("%d",Reverce);

    }
    return 0;
}
                            /* UPDATED A5*/
// Reverce code
int main()
{
    int A,B,count=0,b=1,c=0;
    printf("Enter a number");
    scanf("%d",&B);
    A=B;
    while(B)
    {
        count+=1;
        B=B/10;
    }
    for(int i=1;i<count;i++)
        b*=10;
    while(A)
    {
        c+=(A%10)*b;
        b/=10;
        A/=10;
    }
    printf("%d",c);
    return 0;
}
int aa5()
{
    int N,Reverce=0;
    printf("Enter a number");
    scanf("%d",&N);
    while(N)
    {
        Reverce=Reverce*10 + N%10;
        N/=10;
    }
    printf("%d",Reverce);
}



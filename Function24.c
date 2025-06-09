#include<stdio.h>
//1.Write a function to print all prime numbers between two given numbers.(TSRN)
int prime(int A)
{
    int i;
    for (i=2;i<A;i++)
    {
        if(A<=1)
        {
            break;
        }
        else if(A%i==0)
        {
            break;
        }
    }
    if(i==A)
        printf("%d\n",A);
}
int A1()
{
    int a,b;
    printf("Enter First Number and Last Number:\n");
    scanf("%d%d",&a,&b);
    while(a<=b)
    {
        prime(a);
        a++;
    }
}

//2.Write a function to print first N terms of Fibonacci series(TSRN)
int Fibonacci(int A)
{
    int N;
    printf("Enter a Last number");
    scanf("%d",&N);
    int B=A++;
    int a=1;
    while(a<=N)
    { 
        int C=A+B;
        printf("%d\n",C);
        A=B;
        B=C;
        a++;
    }

}
int A2()
{
    int A=0;
    Fibonacci(A);
}
//3. Write a function to print PASCAL triangle. (TSRN)

//4. Write a function to print all Armstrong number between two given numbers.(TSRN)
//5. Wtite a function to finde sum of first N term of the series 1!1+2!2+3!3+4!4+5!5...n!n(TSRN)
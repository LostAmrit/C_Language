                    /*DECISION CONTROL STATEMENT*/
#include<stdio.h>
//1.Write a program to cheack whether a number is possitiv or non-possitive
int A1()
{
    float a;
    printf("Enter any type of Number");
    scanf("%f",&a);
    if(a>0)
        printf("Possitive Number");
    else
        printf("Non-Possitive Number");
    return 0;
}
//2.write a progam to check whether a given number is divisible by 5 or not
int A2()
{
    int a;
    printf("Enter any number");
    scanf("%f                                                                                                           ",&a);
    if(a%5==0)
        printf("Number is devided by 5");
    else
        printf("Number is not devided by 5");
    return 0;
}
//3.Write a program to check whether a given number is an even or odd number
int ma()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    if(a%10==0)
        printf("Even Number");
    else
        printf("Odd Number");
}
//4.Write a program to check wether a given number is an even or odd without using % operator.
int main()
{
    int a;
    printf("Enter number");
    scanf("%d",&a);
    if(((a/2)*2)==a)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}
//5.Write a program to check whether the given number is even or odd using a bitwise operater
int A5()
{
    int a;
    printf("Enter Number");
    scanf("%d",&a);
    if(~a%2==0)
    {
        printf("odd Number");
    }
    else
        printf("Even Number");
    return 0;
}
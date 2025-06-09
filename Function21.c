#include<stdio.h>
//1.write a function to calculate area of circle(TSRS)
int area(int);
int A1()
{
    int r;
    printf("Enter Radius of circle");
    scanf("%d",&r);
    int s=area(r);
    printf("Area is:%d",s);
    return 0;
}
int area(int r)
{
    int result=3.14*r*r;
    return result;
}
//2.Write a function to calculate simple interest (TSRS)
int SimpleInterest(int,int,int);
int A2()
{
    int Principle,Rate,Time;
    printf("Enter Principle,Rate,Time");
    scanf("%d%d%d",&Principle,&Rate,&Time);
    int Result=SimpleInterest(Principle,Rate,Time);
    printf("Simple Interest : %d",Result);
    return 0;
}
int SimpleInterest(int p,int r,int t)
{
    int s=p*r*t/100;
    return s;
}
//3.Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0(TSRS)
int check(int);
int A3()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    int result=check(n);
    if (result==1){
        printf("Even Number");
    }
    else{
        printf("Odd Number")  ;  }
    return 0;
}
int check(int N)
{
    if (N%2==0)
    {
        return 1;
    }
    return 0;
}
//4.Write a function to print first N natural number(TSRN)
void Natural(int);
int A4()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    Natural(n);
    return 0;

}
void Natural(int N)
{
    for(int i=1;i<=N;i++)
    {
        printf("\n%d",i);
    }
}
//5.Write a function to print first n odd natural number(TSRN)
void Odd(int);
int main()
{
    int n;
    printf("Enter a Number");
    scanf("%d",&n);
    Odd(n);
    return 0;

}
void Odd(int N)
{
    for(int i=1;i<=N;i++)
    {
        if (i%2!=0){
            printf("\n%d",i);
        }
        
    }
}

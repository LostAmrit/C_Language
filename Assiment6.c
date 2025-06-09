                 /*More operater on c*/
#include<stdio.h>
//1.Assume price of 1 USD is INR 84.23. write a program to take amount in INR and conver it into USD
int A1()
{
    int Amount;
    printf("Enter Amount received:");
    scanf("%d",&Amount);
    printf("Total Amount in USD:%f\n",Amount/84.23);
    //printf("is%d",1000/2.5);
    return 0;
}                                         
//2.Write a program to take 3 digit number  from the user and rotate its digit by one possition toword the right
int main()
{
    int a;
    printf("Enter any 3 digit number:");
    scanf("%d",&a);
    printf("%d%d%d",((a/10)%10),(a%10),(a/100)%10);
    return 0;
}
//3. What will be the in variabe x after executing following statement  x=10>8>4;
int A3()
{
    int x;
    x=10>8>4;
    printf("%d",x);
    return 0;
}
//4.What will be the value of variabe x after executing following statement x=!2>-2
int A4()
{
    int x;
    x=!2>-2;
    printf("%d",x);
    return 0;
}
//5.What will be the value stre in the variabe x after executing following statement: x=3<0&&5>5
int ma()
{
    int x;
    x=3<0&&5>5;
    printf("%d",x);
    return 0;
}
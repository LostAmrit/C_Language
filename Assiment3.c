//Print and Scanf
#include<stdio.h>
//5.Write a program to print without last digit of given number
int main()
{
    int a,b;
    printf("Enter any number");
    scanf("%d",&a);
    b=a/10;
    printf("without last digit of your given number is:%d",b);
    return 0;
}
//4.write a program to print last digit of given number
int A4()
{
    int a,b;
    printf("Enter any number");
    scanf("%d",&a);
    b=a%10;
    printf("last digit of your given number is:%d",b);
    return 0;
}
//3.write a program to input 3 chatracter and convert its corrosponding ASCII code
int A3()
{
    char a,b,c;
    int d,e,f;
    printf("Enter Any three character ");
    scanf("%c%c%c",&a,&b,&c);
    d=a;
    e=b;
    f=c;
    printf("Your ASCII code a,b,c is %d,%d,%d",d,e,f);
    return 0;
}
//2.write a program to inpute ASCII code and print corrosponding character
int A2()
{
    int a;
    char b;
    printf("Enter any ASCII code");
    scanf("%d",&a);
    b=a;
    printf("Your carracter is %c",b);
    return 0;
}
//1.write a program to input a character from the user and print ASCII code
int A1()
{
    char a;
    int b;
    printf("Enter Any character ");
    scanf("%c",&a);
    b=a;
    printf("Your ASCII code %c is",b);
    return 0;
}
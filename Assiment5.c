                /*More operater on C*/
#include<stdio.h>
//1. Write a code to inpute 3 digit number and display sum of the digit
int A1()
{
    int a;
    printf("Enter 3 digit number:");
    scanf("%d",&a);
    printf("Sum of 3 digits is :%d",(a%10)+((a/10)%10)+((a/100)%10));
    return 0;

}
//2.Write  a program to print ASCII code of +
int A2()
{
    printf("ASCII code of + is: %d",'+');
    return 0;
}
//3.Write a program to find size of int,char, floar, double type variable
int A3()
{
    int a=6;
    char b='h';
    float c=8.7;
    double d=7987657687.8;
    printf("Size of a=%d b=%d c=%d d=%d",sizeof(a),sizeof(b),sizeof(c),sizeof(d));
    return 0;
}
//4.write a program to make last digit of a number zero stored in a variable .eg x=24354 then x=24350
int A4()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    printf("%d",(a/10)*10);
    return 0;
}
//5.Write a program to inpute a number from the user amd also input a didit. Append a digit in a number and print the resulting number. (Example -number=234 and digit 9 then the resulting number is 2349)
int main()
{
    int N;
    int D;
    printf("Enter number and one digit\n");
    scanf("%d%d",&N,&D);
    printf("%d%d",(N/10),((N%10)*10)+D);
    return 0;
}
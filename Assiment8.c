            /*DECISION CONTROL STETATMENT*/
#include<stdio.h>
//1.write a program to check whether a given number is a three digit number or not
int A1()           
{
    int a ;
    printf("Enter number");
    scanf("%d",&a);
    if((a%1000)==a)
        printf("Given number is three digit");
    else
        printf("Given Number is not 3 digit");
    return 0;
}
//2.Write a program to print greater between two number. print one number if both are same
int A2()
{
    int a; 
    int b;
    printf("Enter number");
    scanf("%d",&a);
     printf("Enter number");
     scanf("%d",&b);
    if(a>b)
        printf("Grater number is a:%d",a);
    else
        if(a==b)
            printf("Equal Number %d",b);
        else 
            printf("Smaller Number b: %d",a);
    return 0;
}
//3.write a program to check whether roots of a given quadratic equation are real & distint, real & equal or imaginary root
int A3()
{
    int a, b, c,d;
    printf("Enter a, b, c of Quadratic Equation\n");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if (d>0)
        printf("roots are real & distint");
    else 
        if (d=0)
            printf("roots are real and Equal");
    else
        printf("Roots are imaginary");
    return 0;
}
//4.Write a program whether a program is a leap year or not
int A4()
{
    int year;
    printf("Enter any Year:");
    scanf("%d",&year);
    if(year%4==0)
        printf("This is %d is Leap year",year);
    else
        printf("This is %d is not Leap Year",year);
    return 0;
}
//5.Write a program to find the greatest among three given numbers. print number once if the gratest number appears two or three times.
int A5()
{
    int a, b, c;
    printf("Enter three number\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("%d A is greater number",a);
    else if(b>a&&b>c)
        printf("%d B is greater Number",b);
    else if(a==b&&b==c)
        printf("%d is equal number",a);
    else
        printf("%d C is grater number",c);
    
    return 0;
}

                    /*MORE ON DECISION CONTROL STATEMENT*/
#include<stdio.h>                    

//1.Write a program to check wether a given number is possitie, negetive or zero
int A1()
{
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a>0)
        printf("Possitive Number: %d",a);
    else if(a<0)
        printf("Negetive Number: %d",a);
    else
        printf("Number is Zero: %d",a);
    return 0;
}
//2.Write a program to check whether a given character is an alphabet(uppercase), alphabet (Lowercase), a digit or a special character
int A2()
{
    char a;
    printf("Enter any character of alphabet:");
    scanf("%c",&a);
    if (a<97&&a>=65)
        printf("Uppercase of alphabet:%c",a);
    else if(a>=97&&a<=122)
        printf("Lowercase of alphabet :%c",a);
    else 
        printf("a digit or a special character:%c",a);
    return 0;
    }
//3.Write a program which takes the length of a side of trangle as inpute Display whether the trangle is valid or not
int A3()
{
    int a,b,c;
    printf("Enter length of the trangle A,B,C:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>0&&b>0&&c>0)
        printf("Trangle side is valid A,B,C is: %d %d %d",a,b,c);
    else
        printf("Trangle side is NOT valid A,B,C is: %d %d %d",a,b,c);
    return 0;
}
//4.Write a program which takes the month number as a input and display number of days in that month.
int main()
{
    int month;
    printf("Enter month number");
    scanf("%d",&month);
    if(month<=7){
        printf("Welcome to month");
        if(month%2==0)
            printf("Month %d in total days is 30",month);
        else
            printf("Month %d in total days is 31",month);}
        
    if(month>7)
        if(month%2==0)
            printf("Month %d in total days is 31",month);
        else
            printf("Month %d in total days is 30",month);
    return 0;
}
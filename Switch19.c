#include<stdio.h>
#include<stdlib.h>
//1.Write a program which takes a month number as an input and display number of days in that month

int A1()
{int a;
printf("Enter month of number");
scanf("%d",&a);
switch(a)
{
    case(1):
    {
        printf("January 31 days");
        break ;
    }
    case(2):
    {
        printf("Febuary 28/29days");
        break ;
    }
    case(3):
    {
        printf("March 31 days");
        break ;
    }case(4):
    {
        printf("April 30 days");
        break ;
    }
    case(5):
    {
        printf("May 31 days");
        break ;
    }
    case(6):
    {
        printf("June 30 days");
        break ;
    }
    case(7):
    {
        printf("July 31 days");
        break ;
    }
    case(8):
    {
        printf("August 31 days");
        break ;
    }
    case(9):
    {
        printf("September 30 days");
        break ;
    }
    case(10):
    {
        printf("Octuber 31 days");
        break ;
    }
    case(11):
    {
        printf("November 30 days");
        break ;
    }
    case(12):
    {
        printf("December 31 days");
        break ;
    }
    default:
    {
        printf("Invailied Month Number");
        break ;
    }
    
}
return 0;
}
/**2.Write a menu driven program with folling options:
    1.  Addition
    2.  Subtration
    3.  Multiplication
    4.  Division
    5.  Exit**/

#include<stdlib.h>
int A2()
{
    
    int A;
    int a,b,result;
while(1)
{
    printf("Enter your choice:\n 1-->Addition\n 2-->Subtration\n 3-->Multiplication\n 4-->Divide\n 5-->Exit");
    scanf("%d",&A);
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    
    switch(A)
    {
    
        case(1):
        
            result=a+b;
            printf("Result:%d",result);
            break;
        
        case(2):
            result=a-b;
            printf("Result:%d",result);
            break;
        case(3):
            result=a*b;
            printf("Result:%d",result);
            break;
        case(4):
            result=a/b;
            printf("Result:%d",result);
            break;
        case(5):
            exit(0);
        default:
        
            printf("Inviled Inpute");
        
    }
}
    return 0;


}
//3.Write a program which takes the day number of a week and displays a unique greeting message for the day
int A3()
{
    int a ;
    printf("Enter the day number of week \n");
    scanf("%d",&a);
    switch(a)
    {
        case(1):
            printf("Wellcome Amrit today MONDAY");
            break;
        case 2:
            printf("Wellcome Amrit today TUESDAY");
            break;
        case 3:
            printf("Wellcome Amrit today WEDNESDAY");
            break;
        case 4:
            printf("Wellcome Amrit today THUSDAY");
            break;
        case 5:
            printf("Wellcome Amrit today FRIDAY");
            break;
        case 6:
            printf("Wellcome Amrit today SATURDAY");
            break;
        case 7:
            printf("Wellcome Amrit today SUNDAY");
            break;
        default :
            printf("INVILID INPUT..");
    }
    return 0;
}
//4.Write a menu driven program with the following options
    //1.Check whether a given set of three numbers are lengths of an isosceles triangle or not 
    //2.Check whether a given set of three numbers are lengths of a right angled trangle or note
    //3.Check whether a given set of three numbers are equlatral trangle trangle
    //4.Exit
int A4()    
{
    int a,b,c,d;
    printf("Enter Trangle's lengths for a, b, c\n");
    scanf("%d%d%d",&a,&b,&c);
    int A,B,C;
    A=a*a;B=b*b;C=c*c;
    if(a==0&&b==0&&c==0)
    {
        exit(0);
    }
    if(a==b||b==c)                          //NOT SATISFY
    {
        d=1;
    }
    else if((C==a*a+b*b)||(A==b*b+c*c)||(B==c*c+a*a))
    {
        d=2;
    }
    else if(a==b==c)
    {
        d=3;
    }
    else{
        d=4;
    }
    switch(d)
    {
        case 1:
            printf("Isosceles triengle");
            break;
        case 2:
            printf("Right angle trangle");
            break;
        case 3:
            printf("Equlatral trangle");
            break;
        default:
            exit(0);

    }
}
//5
int main()
{
    int a;
    printf("Enter Number as 1-good, 2-better, 3-best");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            printf("good");
            break;
        case 2:
            printf("better");
            break;
        case 3:
            printf("best");
            break;
        default:
            printf("Invilaid");
    }
}
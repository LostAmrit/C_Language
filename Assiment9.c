                /*DECISION CONTROL STATEMENTS*/
#include<stdio.h>
//1.Write a program which takes the cost price and selling price of a product from the user.Now calculate and print profit and loss persent.
int A1()
{
    float CP,SP;
    printf("Enter product of CP and SP:\n");
    scanf("%f%f",&CP,&SP);
    if (SP>CP)
        printf("profit%% is %f",(((SP-CP)/CP)*100));
    else
        printf("loss%% is %f",(((CP-SP)/CP)*100));
    return 0;
}      
//2.write a program to takes marks of 5 subjects from the user. Assume marks are given out of 100 and passing mark is 33. Now display wether the condidectpassed examination or failed
int A2()
{
    int hin,eng,math,sci,sst;
    printf("Enter marks of Hin, Eng, Math, Sci, SST out of 100");
    scanf("%d%d%d%d%d",&hin,&eng,&math,&sci,&sst);
    if(hin>=33&&eng>=33&&math>=33&&sci>=33&&sst>=33)
        printf("Student is PASS");
    else
        printf("Student is FAIL");
    return 0;
}        
//3. write a program to check a whether given alphabet is in uppercase or lowercase
int A3()
{
    char a;
    printf("Enter any character of alphabet:");
    scanf("%c",&a);
    if (a<97&&a>=65)
        printf("Uppercase of alphabet:%c",a);
    else if(a>=97&&a<=122)
        printf("Lowercase of alphabet :%c",a);
    else
        printf("Invialied character:%c",a);
    return 0;
    }
//5. write  a program to check whether a given number is divisible by 7 or divisible by 3
int A5()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if((a%7==0)||(a%3==0))
        printf("given number is divisible by 7 or divisible by 3");
    else
        printf("given number is NOT divisible by 7 or divisible by 3");
    return 0;
}
//4.write a program to check whether a given number is divisible by 3 and divisible by 2.
int main()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if ((a%3==0)&&(a%2==0))
        printf("given number is divisible by 3 and divisible by 2");
    else
        printf("given number is NOT divisible by 3 and divisible by 2");
    return 0;
}
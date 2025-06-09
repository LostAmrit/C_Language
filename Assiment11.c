                        /*ITERATIVE CONTROL STATEMENT*/
#include<stdio.h>
//1.Write a program to print MySirG 5 time on the screen
int A1()
{
    int i=0;
    while(i<5)
    {
        printf("MySirG\n");
        i++;
    }
    return 0;
}
//2.Write a program to print the first 10 natural number
int A2()
{
    int i=1;
    while(i<=10)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}
//3.Write a program to print the first 10 natural number in reverce order
int A3()
{
    int i=10;
    while(i>=1)
    {
        printf("\n%d",i);
        i--;
    }
    return 0;
}
//4.Write a program to print the first 10 odd natural number
int A4()
{
    int i=1;
    int count=0;
    while(count<10)
    {
        if(i%2!=0){
        printf("\n%d",i);
        count++;}
          
        i++;
        
    }
    return 0;
}
//5. write a program to print first 10 odd number in reverce order
int main()
{
    int N=100;
    int count=0;
    while(count<=10)
    {
        if(N/2==0)
        {
            printf("%d",N)
        }
        count--;
        i--;
    }
    return 0;                                                              
}
//6. write a program to print the first 10 even natural number.
//7. write a program to print the first 10 even natural number in reverce order.
//8. write a program o print square of first 10 natural number.
//9. write a program to print cubes of the first 10 natural number
//10. Write a program to print a table of 5.
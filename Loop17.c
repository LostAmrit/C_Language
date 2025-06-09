#include<stdio.h>
//Write a program to drow the pattarns
//1.
int A1()
{
    
    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//3.
int A3()
{
    
    for (int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//2.
int A2()
{
    
    for (int i=1;i<=5;i++)
    {
        for(int j=5-i;j!=0;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//4.
int A4()
{
    
    for (int i=5;i>=1;i--)
    {
        for(int j=5-i;j!=0;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//5.
int A5()
{
    
    for (int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
//6.
int A6()
{
    
    for (int i=1;i<=5;i++)
    {
        for(int j=i;j!=0;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}
//7.
int main()
{
    
    for (int i='E';i>='A';i--)
    {
        for(int j='E'-i;j!=0;j--)
        {
            printf(" ");
        }
        for(int j='A';j<=i;j++)
        {
            printf("%c",j);
            
        }
        printf("\n");
    }
    return 0;
}
//8.
int A8()//Incomplet
{
    for(int i=1;i<=10;i++)
    {
        for(int j=i;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    return 0;
}
//9.
//10.
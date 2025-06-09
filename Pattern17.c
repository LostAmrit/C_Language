#include<stdio.h>
//1.
// *
// **
// ***
// ****
// *****
int A1()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
//2.
//     *
//    **
//   ***
//  ****
// *****
int A2()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
//3.
// *****
// ****
// ***
// **
// *
int A3()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    return 0;
}
//4.
// *****
//  ****
//   ***
//    **
//     *
int A4()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
                printf("*");
            
        }
        printf("\n");
    }
    return 0;
}
//5.
// 1
// 12
// 123
// 1234
// 12345
int A5()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
//6.
// 1
// 21
// 321
// 4321
int A6()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=i;j>=1;j--)
        {
            if(j>=1)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
//7.
// ABCDE
//  ABCD
//   ABC
//    AB
//     A
int A7()
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
}//8.
int main()
{
    int i,j=0;
    while(j<=10){
    for(i=1;i<=4;i++)
    {
        
        {
            j=j+i;
            int k=j;
            if(j<=k)
                printf("%d",j);
        }
        printf("\n");
    }}
    return 0;
}
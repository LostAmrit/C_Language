#include<stdio.h>
//Write a program to drow the pattarn
//1.  *
//   ***
//  *****
// *******
int A1A()
{
    //int R=7;
    // printf("Enter Row");
    // scanf("%d",&R);
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=(2*7  -1);j++)
        {
            if(j>=7+1-i&&j<=7-1+i)
            {
                printf("*");
            }
            else{
                printf(" ");
            } 
        }
        printf("\n");
    }
    return 0;
}
int A1()
{
    int R;
    printf("Enter Row");
    scanf("%d",&R);
    for(int i=1;i<=R;i++)
    {
        for(int j=1;j<=(2*R-1);j++)
        {
            if(j>=R+1-i&&j<=R-1+i)
            {
                printf("*");
            }
            else{
                printf(" ");
            } 
        }
        printf("\n");
    }
    return 0;
}
//2.
// *******
//  *****
//   ***
//    *
int A2()
{
    int R;
    printf("Enter Row");
    scanf("%d",&R);
    for(int i=R;i>=1;i--)
    {
        for(int j=1;j<=(2*R-1);j++)
        {
            if(j>=R+1-i&&j<=R-1+i)
            {
                printf("*");
            }
            else{
                printf(" ");
            } 
        }
        printf("\n");
    }
    return 0;
}
//3.
//    *   
//   * *  
//  * * * 
// * * * *
int A3()
{
    
    for(int i=1;i<=4;i++)
    {
        int status=1;
        for(int j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                if(status)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
                status=1-status;
            }
            else{
                printf(" ");
            } 
        }
        printf("\n");
    }
    return 0;
}
//4.
int main()
{
    
    for(int i=1;i<=4;i++)
    {
        int k=1;
        for(int j=1;j<=7;j++)
        {
            
            if(j>=5-i&&j<=3+i)
            {
                printf("%3d",k);
                j<4?k++:k--;
            }
            else{
                printf("  ");
            } 
        }
        printf("\n");
    }
    return 0;
}
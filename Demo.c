//Array
#include<stdio.h>

int A0()//Bitwise Operator
{
    int x=25;
    
    int y=~x;
    printf("%d",y);
    return 0;
}
int A4()
{
    printf("Hello Word");
    return 0;
}
int A3()//Escape Sequence
{
    printf("Googmo%rning guy");
    //printf("ReplyABCDEFG\rme");
    return 0;
}
int A2()//2D
{
    int a[3][4],i,j;
    printf("Enter array element");
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=3;j++)
       {
        scanf("%d",&a[i][j]);

       }
    }
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=3;j++)
       {
        printf("Your Array is %d",a[i][j]);

       }
       return 0;
    }
    
}
int A1()//1D
{
    int a[5],i;
    printf("Enter Array element");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d",a[i]);
    }
    return 0;

}
int A()
{
    int a;
    printf("Enter any number");
    scanf("%d",&a);
    if (a>0)
    {
        printf("possitive");
    }
    else
    {
        printf("Negetive number");
        return 0;
    }
}
int A5()
{
    printf("%lf",1000/2.5);
    printf("\n%lf",1000/20.5);
    printf("\n%lf",10000/205);
    return 0;
}
int A6()
{
    float a;
    printf("%d",a>0);
    return 0;
}
int A7()
{
    double a=89.5;
    int b=a;
    //printf("%lf",89.5%10);
    return 0;
}
int A8()
{
    int i=0;
    while (i<11)
    {
        printf("%d",i);
        i++;
    }
    return 0;
}
int main()
{
    int i;
    int chance=1;

    while (chance<4)
    {
        printf(eEnter even number);
        scanf("%d",&i)
        if(i%2==0){
            break;

        }
        
    }
}
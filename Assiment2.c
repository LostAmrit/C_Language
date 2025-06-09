#include<stdio.h>
//5 Write a program to ask to user CP & SP per dozen of banana. Calculat profit or lose to sell 25 banana
int p5()
{
    int CP,SP,rateOfOneAtCP,rateOfOneAtSP,profit,loss;//profit%, loss%;
    printf("Enter cost price per dozen of banana :");
    scanf("%d",&CP);
    printf("Enter SP per dozen of banana :");
    scanf("%d",&SP);
    rateOfOneAtCP=CP/12;
    rateOfOneAtSP=SP/12;
    profit=(25*rateOfOneAtSP)-(25*rateOfOneAtCP);
    loss=(25*rateOfOneAtCP)-(25*rateOfOneAtSP);
    profit%=(profit*100)/(25*rateOfOneAtCP);
    loss%=(loss*100)/(25*rateOfOneAtCP);
    if (SP>CP)
    {
        printf("profit of 25 banana is :%d \n",rateOfOneAtCP);
        printf("Profit% of 25 banana is : %d\n",profit);
    }
    else
    {
        printf("Loss of 25 banana is :%d\n",loss);
        printf("Loss of 25 banana is : %d\n",loss);
    }


}
//4Write a program to find volume of cubid
int A4()
{
    int l,b,h,volume;
    printf("Enter cuboid of Length");
    scanf("%d",&l);
    printf("Enter cuboid of breath");
    scanf("%d",&b);
    printf("Enter cuboid of height");
    scanf("%d",&h);
    volume=(l*b*h);
    printf("Volume of Cuboid is: %d ",volume);
    return 0;
}
//3.Write a program to calculate simple interest
int A3()
{
    int p=1500;int t=2; int r=8;
    int simpleInterest;
    simpleInterest=(p*t*r)/100;
    printf("Simple Interest of 2 year at 8%% is %d",simpleInterest);
    return 0;
}
//2.write a program to calculate circumference of circle
int A2()
{
    int r=14;
    int circumference;
    circumference=2*3.14*r;
    printf("Curcumference of Circle is %d ",circumference);
    return 0;
}
//1. write a program to calculate average of integer , integer is given to the user
#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("Enter three Number :\n ");
    scanf("%d%d%d",&a,&b,&c);

    d=(a+b+c)/3.0;
    int p%=67;
    printf("Average value of %d,%d, %d is %f %d",a,b,c,d,p%);

    return 0;

}
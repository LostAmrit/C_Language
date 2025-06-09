//Assiment 1
#include<stdio.h>
int A1()
{
    printf("hello word");
    return 0;
}

int A2()
{
    printf("hello \n student");
    return 0;
}

int A3()
{
    printf("\"hello word\"");
    return 0;
}

int A4()
{
    printf("\\nhello word");
    return 0;
}

int A5()
{
    printf("\\r");
    return 0;
}

int A6()
{
    printf("\"Teacher's Day\"");
    return 0;
}


int A7()
{
    int a,b,sum;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
    return 0;
}

int A8()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    printf("%d\n%d",a*a,b*b);
    return 0;
}

int A9()
{
    int l,b;
    printf("Enter length & breath:\n");
    scanf("%d%d",&l,&b);
    printf("Area of Rectrangle is:%d",l*b);
    return 0;
}

int A10()
{
    int r;float area;
    printf("Enter a radius");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area is:%f",area);
    return 0;
}
//Assiment 2
int B1()
{
    int a,b,c;
    printf("Enter three number:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("Average:%d",(a+b+c)/3);
    return 0;
}
int B2()
{
    int r;
    printf("Enter radius:\n");
    scanf("%d",&r);
    printf("Circumference of circle:%f",2*3.14*r);
    return 0;
}
int D1()
{
    int a;
    int b;float c;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    c=a*(b);
    printf("%f",c);
    return 0;

}
int B3()
{
    int p,t,r;
    printf("Enter Principle,Time,Rate");
    scanf("%d%d%d",&p,&t,&r);
    float simpleInterest=p*r*t/100;
    printf("%f",simpleInterest);
    return 0;
}
int B4()
{
    int l,b,h;
    printf("Enter Lenth,Breath,Height");
    scanf("%d%d%d",&l,&b,&h);
    int volumOfCuboid=l*b*h;
    printf("Volume of Cuboid:%d",volumOfCuboid);
    return 0;
}
int B5()
{
    int CP,SP;
    int profit;
    int loss;
    printf("Enter CP & SP of banana");
    scanf("%d%d",&CP,&SP);
    if(SP>CP){
        profit=25*(SP/12-CP/12);
        printf("Profit:%d",profit);}
    else{
        loss=25*(CP/12-SP/12);
        printf("loss:%d",loss);}
    return 0;
}
int display(int n)
    {
        if(n<1)
            return 12;
        else
            {printf("%d ",n);
            int a=display(n-1);
            printf("%d ",a);
            printf("%d ",n);}
    }
int main()
{
    int n=3;
    display(n);
    return 0;
}
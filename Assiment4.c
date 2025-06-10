#include<stdio.h>
/*Operater in C*/
//1.write a program to calculate size of a character constant
int A1()
{
    char a;
    printf("Enter any chracter");
    scanf("%c",&a);
    int b=sizeof(a);
    printf("size of character constant is %d",b);
}
//2.write a program to calculate size of a real constant
int A2()
{
    int a;
    printf("Enter any chracter");
    scanf("%d",&a);
    int b=sizeof(a);
    printf("size of character constant is %d",b);
}
//3.write a program with one char type variabe. Assine 'A' into variabe and change its valus 'A' to 'B' using increment operater
int A3()
{
    char x='A';
    int y;
    y=x;
    y+=1;
    printf("%c",y);
    return 0;
}
//write a program to swap the value of two variabe
int A4()
{
    int a=45;
    int b=676;
    int c,d;
    c=b;
    d=a;b=d;
    a=c;
    c=a;
    

    printf("%d\n%d",a,b);
    return 0;
}
//5. write a program to swap a value without using third variabe
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    a=a*100000000+b;                    //GENIOUS
    b=a/100000000;
    a=a%100000000;
    
    printf("%d %d",a,b);
    return 0;
}
//5.  UPDATED
int A55()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
    return 0;
}
//6. Write a program to swap value of two variable without using third variable and without using +,- operaters.
int A6()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d %d",a,b);
    return 0;
}
//7. Write a program to swap value of two int variables without using third variable and arithmetic operater
int A7()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
    return 0;
}
//8. Write a program to swap of two int variabes in single line arithmetic experation
int A8()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d",&a,&b);
    a=((a+b)-(b=b-a));
    
    printf("%d %d",a,b);
    return 0;
}
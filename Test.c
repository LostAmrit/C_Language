#include<stdio.h>
int A()
{
   int i,a,b;
   printf("Enter two numbers:");
   scanf("%d%d",&a,&b);
   for(i=(a>b?a:b);i<=a*b;i++)
   {
    if(i%a==0 && i%b==0)
        printf("LCM:%d",i);
    break;
   }
   //printf("i=%d",i);
   if(i>=a*b)
       printf("LCM:%d",a*b);

}
int display(int n)
    {
        if(n<1)
            return 12;
        else
            {
                printf("n-%d ",n);
                int a=display(n-1);
                printf("a=%d ",a);
                printf("n=%d ",n);
        }
    }
int main()
{
    int n=3;
    display(n);
    return 0;
}
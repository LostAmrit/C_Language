#include<stdio.h>
#include<string.h>
int Function(int ,int);
int Function(int a,int b)
{
    int c=a+b;
    return c;
}
int main()
{
    int A=34;int B=23;
    printf("Sum:%d",Function(A,B));
    return 0;
}
int CheckIndex()              //Check Index
{
    int i=1;
    for(i;i<4;i++)
    {
        printf("%d i \n",i);
        for(int j=1;j<=5;j++)
        {
            if(j==4)
                break;
            printf("%d j \n",j);
            {
                for(int k=1;k<=5;k++)
                    printf("%d k \n",k);
            }
        }
    }
}
int Frequency()
{
    char A[]="Teri";// meri story jaisy bik bang story mai suna hu churi churi ye sab ko";
    int i=0,l=0,k,count,j;
    for(i;A[i];i++)
    {
        for(count=0,j=(i);A[j];j++)
        {
            if(A[j]==A[i])
                count++;
        }
        for(k=i;k>=0;k--)
        {
            if((A[k]==A[i] && k!=i)|| A[k]==' ')
                break; 
            else
                printf("%c=%d\n",A[i],count);
        }
    }
    return 0;
}
int PreviousCharacterUnique(char A[],int i)
{
    int k;
    
        int p;
        for(p=0;A[p];p++)
        {                           //remove space
            if(A[p]==' ')
                A[p]=A[p+1];
        }
    
    for(k=i;k>=0;k--)
        {
            if((A[k]==A[i] && k!=i)|| A[k]==' ')
                return 0;
        }
        return 1;
}
int count(char A[],int i)
{
    int c,j;
    for(c=0,j=(i);A[j];j++)
        {
            if(A[i]==A[j])
                c++;
        }
        return c;
}
//void FrequencyWithFunction(char);
//int PreviousCharacterUnique(char);
//int count(char);
void FrequencyWithFunction(char A[])
{
    //char A[]="Teri";
    int i=0;
    for(i;A[i];i++)
    {
        if(PreviousCharacterUnique(A,i))
            printf("%c=%d\n",A[i],count(A,i));
    }
}
int CheckLoopInStatement()
{
    int i=0,j=5,k=0;
    for(i,j;i<=5,j>2;i++,j--,k++)
        printf("%d, %d, %d\n",i,j,k);
    return 0;
}
int main()
{
    char A[]=" Terihhhjjbolnamadhaeeeedddderchoddd";
    FrequencyWithFunction(A);
    return 0;
}
void Checkbreak()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==5);
        else
        {   printf("%d ",i);
            break;
        }
    }
}
int main()
{
    Checkbreak();
    return 0;
}
//Number will become 12534535--> 12034030
void rev(int ,int);
int main()
{
    int a,result=0;
    printf("Enter a Number:");
    scanf("%d",&a);
    int b=1,c=a;
    while(a)
    {
        if(c%5==0)
            result=1,c=1;
        else if(a%5==0)
            b*=10;
           // result=result*10+1;
        else
            result=result*10*b+a%10,b=1;
        a/=10;
    }
    //printf("%d\n",result);
    rev(result,c);

}
void rev(int a,int b)
{
    
    int result=0;
    while(a)
    {
        result=result*10+a%10;
        a/=10;
    }
    if(b==1)
        result-=1;
    printf("Removed 5-->0 OR New number:%d",result);
}
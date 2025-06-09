#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//1. Write a function to count frequency of each character of the given string.
void Frequency(char A[])
{
    int i,j,count;
    char B[100];
    for(int k='A',l=0;k<='z';k++,l++)
    {
        B[l]=k;
    }
    B[strlen(B)-1]='\0';
    //printf("%s",B);
    for(i=0;A[i];i++)
    {
        for(j=0,count=0;B[j];j++)
        {
            if(A[i]==B[j])
                count++;
            
        }
        //if(B[i]==A[j])
            printf("%c->%d\n",A[i],count);
    }
}
// void Gferequency(char A[])
// {
//     int i=0,j=0,k=0,count=0;
//     do 
//     {
//         while(k>=j)
//         {
//             if(A[k]!=A[j]||A[k]==' ');
//             else
//             {
//                 j+=2;
//                 //break;
//             }
//             k++;
//             if(k==j)
//                 j++;
            
//         }
//     }
//     while(A[i])
//     {
//         if(A[j]==A[i])
//             count++;

//     }
//     printf("%c-->%d",j,count);
    
    
// }
int mainfrequency()
{
    char A[]="Hello";
    int i=0,count=0;
    for(i;A[i];i++)
    {
        for(int k=0;k<=i;k++)
        {
            if((A[k]==A[i] && k!=i))
                break;
            else{
            for(int j=(i);A[j];j++)
            {
                if(A[j]==A[i])
                    count++;
            }
            printf("%c=%d\n",A[i],count);
            count=0;}
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
//2. Write a function to find a  word in a given string.
void Findword(char A[])                                      //Rethink
{
    char a[15];
    char B[15];
    int i,j,count=0,k=0,test=0,b,z;
    printf("SEARCH HEAR:%s\n",A);
    printf("Enter a word you want to find:");
    fgets(a,15,stdin);
    a[strlen(a)-1]='\0';
    count=strlen(a);
    printf("YOUR WORD:%s\n",a);
    for (i=0;a[i];i++)
    {
        test=0;
        for(j=0,z=0;A[j],z<=count-1;j++)
        {  
            if(a[i]==A[j])
            {
                B[z]=A[j];
                z++;
            }
            
        }
        for(test;test<=count;test++)
        {
            if(test==0);
            else
            {
                printf("Not Find Word:");
                printf("%s",a);
                //exit(0);
                break;
            }
        }
        printf("Found Word:");          //NOT SATISFY
        printf("%s",a);

    }
  
}
//3. write a function to make character of each word of the string capital
void Capital(char A[])
{
    int i,k;
    for(i=0,k=0;A[i];i++)
    {
        if(A[0]>='a'&&A[0]<='z')
            A[0]=A[0]-32;
        if(A[i]==' ')
            k=1;
        else if(k==1&&A[i+1]!=0)
        { 
             if(A[i]>='a'&&A[i]<='z')
                A[i]-=32;
             k=0;
        }
        printf("%c",A[i]);
    }
   
}
//4. Write a function to make acronym name from the given name. For example, "Ramesh Chandan Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta"
int countWord(char A[])
{
    int count=1;
    for(int i=0;A[i];i++)
    {
        if(A[i]==' ')
            count++;

    }
    return count;
}
void Acronym(char A[])
{
    int i,l=0,k=0;
    char B[15];
    for(i=0;A[i];i++)
    {
        //while(2)
        {
            if(A[i]==' ')
                l=1;
            else if(l==1&&((A[i]>='a'&&A[i]<='z')&&k==0))
                {
                    B[i]=(A[i]-=32);
                    k=1;
                    // break;
                }
            else if(k==1&&A[i]==' ')
                k=0;
            else if (k==1&&A[i]!=' ')
            {
                continue;
                // k=0;
            }

            else
                k=0;
        }
        B[i]=A[i];
    }
    B[i]='\0';
    printf("%s",B);
}
int main()
{
    char a[]="Hello partner kya bat hai ";
    //Findword(a);
    //printf("%s",b);
    //Capital(a);
    //Acronym(a);
    //printf("%s",b);
    //Gfrequency(a);
    //Reverce(a);
    FrequencyWithFunction(a);
    return 0;
}
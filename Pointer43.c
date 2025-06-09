#include<stdio.h>
#include<string.h>
//1. write a function to swap strings of two char arrays.
void Swap_str(char *str1,char *str2,char *temp)
{
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
    // temp=str1;
    // str1=str2;
    // str2=temp;
    // printf("%s%s",str1,str2);
}
//2. write a function to sort an array of int type values. [void sort(int *ptr,int size)]
void sort(int *ptr,int size)
{
    int j,i;
    for(j=0;j<size-1;j++)
    {   for(i=0;i<size-j-1;i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                ptr[i]=ptr[i]^ptr[i+1];
                ptr[i+1]=ptr[i]^ptr[i+1];
                ptr[i]=ptr[i]^ptr[i+1];
            }
        }
    }
}
//3. Write a function to merge two arrays in a givin array. [void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)]
void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{
    int i,j;
    for(i=0;i<size1;i++)
        arr3[i]=arr1[i];
    //printf("i=%d ",i);
    for(j=0,i=i;i<=size2+size1;i++,j++)
        arr3[i]=arr2[j];
    
    sort(arr3,size1+size2);
}
//5. There are five classes with different number of students in them. Five array containing marks of students of each class. write a function to receive an address of an array of pointers to access marks of all the students. The job of function is to find the highest marks among the classes.
int main()
{
    // char A[50],B[50],C[50];
    // printf("Enter a string line:");
    // fgets(A,50,stdin);
    // printf("Enter 2nd string line:");
    // fgets(B,50,stdin);
    // Swap_str(A,B,C);
    // printf("%s%s",A,B);
    
    int size1,size2;
    int C[30];
    printf("Enter size of Array1:");
    scanf("%d",&size1);
     int A[size1];
    printf("Enter %d elements:",size1);
    for(int i=0;i<size1;i++)
        scanf("%d",&A[i]);
    printf("Enter size of Array2:");
    scanf("%d",&size2);
     int B[size2];
    printf("Enter %d elements:",size2);
    for(int j=0;j<size2;j++)
        scanf("%d",&B[j]);
    //sort(A,size);
    
    merge(A,size1,B,size2,C);
    for(int i=0;i<size1+size2;i++)
        printf("%d ",C[i]);
    return 0;
}
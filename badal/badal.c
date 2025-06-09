#include<stdio.h>
void swap(int a,int b){
    a=b;
    b=a;
    printf("swapped value of a and b is:%d and %d",a,b);
}
int main(){
    int a=6;
    int b=8;
    printf("before swapped value of a and b is %d and %d:",a b);
    swap(a,b);

}
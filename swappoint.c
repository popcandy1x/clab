#include<stdio.h>

void swap(int *,int *);

int main()
{
    int a=0,b=0;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}

void swap(int *ptr,int *ctr){
    *ptr=*ptr+*ctr;
    *ctr=*ptr-*ctr;
    *ptr=*ptr-*ctr;
}
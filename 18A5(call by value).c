#include<stdio.h>
void swap(int,int);
void main()
{
    int a,b;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Before swapping\n value of a = %d \n value of b = %d ",a,b);
    swap(a,b);
    
}
void swap(int a,int b)
{
    int temp=0;
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter swapping\n value of a = %d \n value of b = %d ",a,b);
}

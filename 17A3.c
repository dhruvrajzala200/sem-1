//Calculate sum of two numbers using pointer
#include<stdio.h>
 void main(){
 	 int *ptr1,*ptr2,a,b;
 	 printf("Enter the first number = ");
 	 scanf("%d",&a);
 	 printf("Enter the second number = ");
 	 scanf("%d",&b);
 	  ptr1=&a;
      ptr2=&b;
        printf("The sum of given two number = %d ",*ptr1+*ptr2);
	     	 
 	 
 }

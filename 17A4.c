//Swap value of two numbers using pointer

#include<stdio.h>
 void main(){
   int *ptr1,*ptr2,a,b,temp;
 	 printf("Enter the first number = ");
 	 scanf("%d",&a);
 	 printf("Enter the second number = ");
 	 scanf("%d",&b);
 	  ptr1=&a;
      ptr2=&b;
      temp=ptr1;
      ptr1=ptr2;
      ptr2=temp;
       printf("swap numer is   a=%d b=%d ",*ptr1,*ptr2);
 }

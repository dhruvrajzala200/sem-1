//Demonstrate int, float, double and char pointer

#include<stdio.h>
 void main(){
 	char a='Dhruvraj',*ptr1; 
	 /*last character assign kare*/
 	int b=007,*ptr2;
 	float c=11.07,*ptr3;
 	double d=13.03927336,*ptr4;
 	
 	ptr1=&a;
 	ptr2=&b;
 	ptr3=&c;
    ptr4=&d;
      
      printf("%c \n",*ptr1);
      printf("%d \n",*ptr2);
      printf("%f \n",*ptr3);
      printf("%lf \n",*ptr4);
 }

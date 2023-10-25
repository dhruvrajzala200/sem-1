//Print value and address of a variable

#include<stdio.h>
 void main(){
 	int a,*ptr;
 	 printf("Enter  any number : ");
 	 scanf("%d",&a);
 	 ptr=&a;
 	 printf("value= %d and address of given number = %d",*ptr,ptr);
 }

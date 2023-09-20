//PRINT 1 TO 10 THEN MODIFY PROGRAM PRINT 1 TO N USING WHILE AND DO WHILE LOOP
#include<stdio.h>
 void main(){
 int a=0,n;
 printf("Enter value of n: ");
 scanf("%d",&n);
 while (a<n){
	a++;
 	printf("\n%d",a);
 }	
}
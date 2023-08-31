#include<stdio.h>
 
 void main(){
 	int salary;
 	float hra,da,gross;
 	printf("enter the salary:");
 	scanf("%d",&salary);
 	if (salary>=10000 && salary<20000){
 		hra=salary*(0.2);
 		da=salary*(0.8);
	 }
 	else if (salary>=20000 && salary<30000){
 		hra=salary*(0.2);
 		da=salary*(0.9);
	 }
	 else if (salary>=30000){
 		hra=salary*(0.2);
 		da=salary*(0.95);
	 }
	 else {
	 	printf("invalid salary:");
	 }
	 gross=hra+da+salary;
	 printf("gross is :%f",gross);
 }

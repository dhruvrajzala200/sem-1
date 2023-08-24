#include<stdio.h>

int main(){
	float p,r,t,in;
	printf("enter value of principal:");
	scanf("%f",&p);
	printf("enter value of roi:");
	scanf("%f",&r);
	printf("enter value of time period:");
	scanf("%f",&t);
	printf("the interest is  %f",in=(p*r*t)/100);
}
	

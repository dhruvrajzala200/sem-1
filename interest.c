#include<stdio.h>
void main()
{
	float p,r,t,interest;
	printf("Enter value of principal : ");
	scanf("%f",&p);
	printf("Enter value of roi : ");
	scanf("%f",&r);
	printf("Enter value of time period : ");
	scanf("%f",&t);
	interest=(p*r*t)/100;
	printf("The interest of given amount : %f",interest);
}

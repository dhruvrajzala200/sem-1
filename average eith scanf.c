#include<stdio.h>

void main()
{ 
    int a,b,c;
	float avg;
    printf("Enter first value : ");
    scanf("%d",&a);
    printf("Enter second value : ");
    scanf("%d",&b);
    printf("Enter third value : ");
    scanf("%d",&c);
    avg=(a+b+c)/(float)3;
    printf("The average is : %f",avg);
}

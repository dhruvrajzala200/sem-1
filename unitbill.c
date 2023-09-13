#include<stdio.h>
void main(){
	int u;
	float r,i;
	
	printf("Enter Unit : ");
	scanf("%d",&u);
	
	if(u<50)
	{
		r=u*0.5;
	}
	else if(u>51&&u<150)
	{
		r=(50*0.5)+(u-50)*0.75;
	}
	else if(u>151&&u<250)
	{
		r=(50*0.5)+(100*0.75)+(u-150)*1.20;
	}
	else if(u>250)
	{
		r=(50*0.5)+(100*0.75)+(100*1.20)+(u-250)*1.50;
	}
	i=r*0.20;
	r=r+i;
	printf("Rupees is : %f",r);
}

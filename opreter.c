#include<stdio.h>

void main(){
	
	float a,b,ans;
	char c;
	
	printf("Enter a choise(+,-,*,/) : ");
	scanf("%c",&c);
	
	printf("Enter a value : ");
	scanf("%f",&a);
	
	printf("Enter a value : ");
	scanf("%f",&b);
	
	if(c=='+')
	{
		ans=a+b;
		printf("Answer is : %f",ans);
	}
	else if(c=='-')
	{
		ans=a-b;
		printf("Answer is : %f",ans);
	}
	else if(c=='*')
	{
		ans=a*b;
		printf("Answer is : %f",ans);
	}
	else if(c=='/')
{
	if(b==0)
	{
		printf("Division is not possible");
	}else{
	
	ans=a/b;
	printf("Answer is : %d",ans);
}
}
else
	{
		printf("Enter a vaild opreter");
	}
}

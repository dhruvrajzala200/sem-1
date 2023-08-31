#include<stdio.h>

void main(){
	char Q;
	printf("enter the character :");
	scanf("%c",&Q);
	if(Q>=65 && Q<=90)
	 {
		printf("UPPER CASE   ");
	}
	else if(Q>=97 && Q<=122)
	{
		printf("lower CASE   ");
	}
	else if(Q>=48 && Q<=57)
	{
		printf("digit");
	}
	else{
		printf("special symbol");
	}
}

#include<stdio.h>
void main(){
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if((a%10)%2 ==0){
		printf("Number is Even");
	}
	else {
		printf("Number is Odd");
	}
}
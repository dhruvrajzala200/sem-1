#include<stdio.h>

void main(){
	char a;
	printf("Enter a character : ");
	scanf("%c",&a);
	if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
	{
		printf("Enter character is vowel");
	}
	else
	{
		printf("Enter character is consonant");
	}
}

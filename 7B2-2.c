//Check whether character is an alphabet or not using conditional operator
#include<stdio.h>

 void main(){
 	char a;
 	printf("Enter a character :");
 	scanf("%c",&a);
 	((a>='A' && a<='Z') || (a>='a' && a<='z')? printf("character is an alphabet"):printf("character is not alphabet"));
 	
 }

//Check whether character is an alphabet or not using conditional operator
#include<stdio.h>

 void main(){
 	char a;
 	printf("Enter an alphabet :");
 	scanf("%c",&a);
 	((a>=65 && a<=90) || (a>=97 && a<=122)? printf("character is an alphabet"):printf("character is not alphabet"));
 	
 }

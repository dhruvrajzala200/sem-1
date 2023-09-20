//Read 3 numbers, multiply largest number from
// first two numbers to third one using switch.
#include<stdio.h>
  void main(){
  	int a,b,c;
  	printf("Enter 3 number :");
  	scanf("%d %d %d",&a,&b,&c);
  	switch (a>b){
  		case 0 : 
  		printf("%d",b*c);
  		break;
	
	
  		case 1 : 
  		printf("%d",a*c);
  		break;
	  }
  }

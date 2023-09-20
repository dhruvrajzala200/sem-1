//. Perform Addition, Subtraction, Multiplication and Division 
//of 2 numbers as per user’s choice using switch
#include<stdio.h>
   void main(){
   	int a,b,c;
   	char x;
   	float d;
   	printf("Enter operation(+,-,*,/)");
   	scanf("%c",&x);
   	printf("Enter 2 numbers :");
   	scanf("%d %d",&a,&b);
   	switch(x){
   		case '+' : {
   			c=a+b
   			printf("Addition of 2 numbers is : %d",c);
			break;
		   }
		   case '-' : {
   			c=a-b
   			printf("Subtraction of 2 numbers is : %d",c);
			break;
		}
		case '*' : {
   			c=a+b
   			printf("Multiplication of 2 numbers is : %d",c);
			break;
		}
		case '/' : {
   			d=(float)a/b;
   			printf("subtraction of 2 numbers is : %f",d);
			break;
		}
		default:{
			printf("Enter valid input :")
			break;
		}
   		
	   }
   }
   

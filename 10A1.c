//Find out sum of first and last digit of a given number

#include<stdio.h>
  
    void main(){
    	int f,n,l,sum=0;
    	printf("Enter a number :");
    	scanf("%d",&n);
    	l = n%10;
    	f = n;
    	while (f>=10){
    		f=f/10;
        }
        sum=l+f;
		printf("The sum = %d",sum);
}

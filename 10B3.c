//Check whether the given number is palindrome or not

#include<stdio.h>

    void main(){
    	int n,i=1,a,r;
    	a=n;
    scanf("%d",&n);
while(n>0){
	    i=n%10;
	    r=r*10;
	    n=n/10;
}
if(r==a){
    	printf("Number is palindrome");
	}
	else{
		printf("Number isn't palindrome");
}
	}

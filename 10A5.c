//Print given number in reverse order

#include<stdio.h>

void main(){
	int r,n;
	scanf("%d",&n);
	
while(n>0){
	r=n%10;
	printf("%d",r);
	n=n/10;
    }
}

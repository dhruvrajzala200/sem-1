#include<stdio.h>
#include<time.h>

void main(){
	
	time_t t;
	time(&t);
	
	printf("Current time is : %s", ctime(&t));
}


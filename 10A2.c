//Find the sum and average of different numbers which are accepted by user as many as user wants

#include<stdio.h>
  
    void main(){
    	int n,a,i=1,sum=0;
    	float avg;
    	printf("How many numbers do you have enter : ");
    	scanf("%d",&a);
    while(i<=a){
    	printf(" Enter the number :");
    	scanf("%d",&n);
    	sum=sum+n;
    	i++;
	}
	    avg=sum/(float)a;
	    printf("sum of all number : %d\n",sum);
	    printf("avg of all number : %f",avg);
}

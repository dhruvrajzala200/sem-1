//2. Count number of positive or negative number from an array of n numbers
#include<stdio.h>
 int main(){
 	int n,i,pos=0,neg=0;
 	 printf("enter value of n =");
     scanf("%d",&n);
	  int num[n];
	  printf("%d num is =\n " );
	for(i=0;i<n;i++){
		
		scanf("%d",&num[i]);
		if(num[i]>0) {
			
         	pos=pos+1;
		 }
		 else
		 {
		 	neg=neg+1;
		 }
    } 
    
	printf("Positive:Negative = %d:%d",pos,neg);
}

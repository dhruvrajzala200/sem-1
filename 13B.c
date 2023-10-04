//(a)
//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15
#include<stdio.h>
void main(){
	int i,j,k=1;
for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
		printf(" %d",k);
		k++;
	}
	printf("\n");
 }
}
//(b)
//1
//0 1
//0 1 0
//1 0 1 0
//1 0 1 0 1

#include<stdio.h>
  void main(){
  	int i,j;
for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
	if((i+j)%2==0){
		 printf("1");
	}
	else{
		printf("0");
	}
  }
  	printf("\n");
 }
}

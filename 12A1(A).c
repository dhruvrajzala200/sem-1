//(a)
//*
//**
//***
//****
//*****

#include<stdio.h>
 void main (){
    int j,i;
    for(i=1;i<=5;i++){
    	   for(j=1;j<=i;j++){
    printf("*");
		}
	printf("\ n");
	}
    
}

//(b)
//1
//12
//123
//1234
//12345

#include<stdio.h>
 void main(){
 	int i,j;
for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
		printf("%d",j);
	}
	printf("\n");
 }
}

//(c)
//5
//54
//543
//5432
//54321

#include<stdio.h>
void main(){
	int i,j,n=5;
for(i=n;i>=1;i--){
	for(j=n;j>=i;j--){
		printf("%d",j);
	}
	printf("\n");
  }
}
//(d)
//1
//22
//333
//4444
//55555

#include<stdio.h>
 void main(){
 	int i,j,n=5;
for(i=1;i<=n;i++){
	for(j=1;j<=i;j++){
		printf("%d",i);
	}
	printf("\n");
  }
}


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
//12345
//1234
//123
//12
//1

#include<stdio.h>
void main(){
    int i,j,n=5;
    for(i=1;i<=n;i++){
    	for(j=1;j<=(n+1)-i;j++){
    printf("%d",j);
	  }
	printf("\n");
    }
}

//(c)
//     *
//    * *
//   * * *
//  * * * *
// * * * * *

#include<stdio.h>

void main(){
int i,j,n=5;
    for(i=1;i<=n;i++){
    	for(j=i;j<=(n-1);j++){
    		printf(" ");
		}
	for(j=1;j<=i;j++){
		printf(" *");
	 }
	    printf("\n");
	}
}

//(d)
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5

#include<stdio.h>
void main(){
    int i,j,n=9;
    for(i=1;i<=(n+1)-i;i++){
    	for(j=1;j<=i;j++){
    printf("%d",j);
	  }
	printf("\n");
    }
}




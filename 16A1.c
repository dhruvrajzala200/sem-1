//Read values in two-dimensional array and print them in matrix form

#include<stdio.h>
 void main(){
 	int m,n,i,j;
 	 printf("Enter raws and columns : ");
 	 scanf("%d %d",&m,&n);
 	   int matrix[m][n];
 	    for(i=0;i<m;i++)
		 {
 	    	for(j=0;j<n;j++)
			 {
 	    		printf("Enter mrtrix[%d][%d]: ",i,j);
                scanf("%d",&matrix[i][j]);
			 }
			printf("\n");
		 }
       for(i=0;i<m;i++)
	   {
 	        for(j=0;j<n;j++)
			 {
 	        	printf("%d ",matrix[i][j]);
			 }
		printf("\n");
	}
 }

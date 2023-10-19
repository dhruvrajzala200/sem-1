//Count number of positive, negative and zero elements from 3 X 3 matrix.
#include<stdio.h>
 void main(){
 	int rows,cols,i,j,pos=0,neg=0,zero=0;
 	 scanf("%d %d",&rows,&cols);
 	  int matrix[rows][cols];
 	    for(i=0;i<rows;i++)
		 {
 	    	for(j=0;j<cols;j++)
			 {
			 	printf("Enter matrix[%d][%d]: ",i,j);
 	    		scanf("%d",&matrix[i][j]);
			 }
			  printf("\n");
		 }
		for(i=0;i<rows;i++)
		{
 	    	for(j=0;j<cols;j++)
			 {
 	    		 if (matrix[i][j]>0)
				   	pos++;
 	    		 if(matrix[i][j]<0)
				    neg++;
				if(matrix[i][j]==0)
				zero++;
			 }
		 }
		 printf("Positive numbers = %d \n",pos);
		 printf("negative numbers = %d \n",neg);
		 printf("zeros  = %d \n",zero);
 }

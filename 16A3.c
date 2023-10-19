//Read and store the roll no and marks of 20 students using 2D array
#include<stdio.h>
 void main(){
 	int i=0,j=0;
 	 int matrix[20][1];
 	  for(i=0;i<20;i++)
	   {
	   	for(j=0;j<1;j++)
		   {
 	  	 printf("\nEnter   marks of student of roll no %d :",i+1);
 	  	scanf("%d",&matrix[i][j]);
			 }
	   }
	    for(i=0;i<20;i++)
		{
	    	 for(j=0;j<1;j++)
			 {
	    	 	 printf("\nMarks of student with roll no %d = %d",i+1,matrix[i][j]);
			 }
			  printf("\n");
		} 
	}

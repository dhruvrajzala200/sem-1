//Perform Addition of two matrices
 #include<stdio.h>
 void main(){
 	int row,col,i,j;
 	 printf("Enter no of rows and columns :");
 	 scanf("%d %d",&row,&col);
 	  int arr1[row][col],arr2[row][col],res[row][col];
 	   for(i=0;i<row;i++){
 	   	for(j=0;j<col;j++){
 	   		printf("Enter value of array =");
 	   		scanf("%d",& arr1[i][j]);
			scanf("%d",& arr2[i][j]);
			res[i][j]=arr1[i][j]+arr2[i][j];
			}
			 printf("\n");
		}
			 printf("Addition of matrix = \n");
			    for(i=0;i<row;i++){
 	   	for(j=0;j<col;j++){
 	   		printf("%d",res[i][j]);
		}
		printf("\n");
 }

}

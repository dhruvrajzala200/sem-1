//13B1-c
/*(c)
* * * * *
 * * * *
  * * *
   * *
    * */


	for(i=1;i<=5;i++){
		
		for(a=1;a<=i;a++){
			printf(" ");
		}
		
		for(j=5;j>=i;j--){
			printf("* ");
		}
		
		printf("\n");
	}
	printf("\n");
	
//13B1-d
/*(d)
      1
     A B
    1 2 3
   C D E F
  1 2 3 4 5 */

	for(i=1; i<=5; i++){
		for(j=7; j>=i; j--)
		{
			printf(" ");
		}

		for(c=1; c<=i; c++)
		{ 
			if(i%2==1){
				printf("%d ",y);
				y++;
			}
			else{
				printf("%c ",x);
				x++;
			}
		}            
		y=1;
		x='A';
		printf("\n");
	}
	printf("\n");
	
//13B1-e
/*(e)
 * * * * *
 *       *
 *       *
 *       *
 * * * * * */
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==1 || i==5 || j==1 || j==5){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
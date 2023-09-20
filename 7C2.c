//Print number of days in a month considering leap year using switch
#include<stdio.h>
 void main(){
 	int mon,year;
 	printf("Enter month 1 to 12 :");
 	scanf("%d",&mon);
 	printf("Enter year :");
 	scanf("%d",&year);
 	
 	switch (mon) {
	 
	            case 1 : 
	            case 3 :
	            case 5 :
	            case 7 :
	            case 8 :
	            case 10:
	            case 12:
	printf("no. of days= 31");	
	    break;
	
	           case 2 :
	if((year%4 == 0 && year%100 != 0)||(year%400==0)){
		printf("February has 29 days(leap year),/n");
	} 
	else {
		printf("February has 28 days(non-leap year),/n");
	}
		break;
		      case 4 :
		      case 6 :
		      case 9 :
              case 11:	
		printf("no. of days=30");
		break;		
		default:
    	
    printf("invalid input");
    break;
		
	
	
	            	
	 }
 }


//Find factorial of a number using  recursive function
#include<stdio.h>
int fact(int);
void main()
{
    int i;
    printf("Enter an integer : ");
    scanf("%d",&i);
    int res = fact(i);
    printf("Factorial = %d",res);
}
int fact(int n)
{
  if(n==1)
  {
      return 1;
  }
  if(n==0)
  {
  	return 1;
  }
   else
  {
      return n*fact(n-1);
  }
}

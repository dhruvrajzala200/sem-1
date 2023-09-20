#include<stdio.h>

void main (){
    int a,b,c;
    printf("Enter value of a,b,c :");
    scanf("a,b,c is %d %d %d");

if
  (a>b && b>c)
{
    printf(b);
}
else if 
  (a>c && c>b)
  {
    printf(c);
  }
  else if 
  (c>a && a>b)
  {
    printf(a);
  }
  
}
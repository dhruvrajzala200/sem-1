# include<stdio.h>
# include<math.h>

void main () {
    float a,b,c,r1,r2,d;
    
    printf ("Enter the value of a b c: ");
    scanf (" %f %f %f", &a, &b, &c);
    
    d= (b*b) - (4*a*c);
    if (d>=0) {
        r1 = (-b+sqrt (d) )/ (2*a);
        r2 = (-b-sqrt (d) )/ (2*a);
        printf ("The  roots = %f %f", r1, r2);
    }
    else {
   	printf("wrong root : ");
   }

}

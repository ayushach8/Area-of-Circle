#include <stdio.h>
int main ()
 {
 	float a,b,c,d,e,ans,sum;
 	printf ("Enter 5 Subjects:\n");
 	scanf ("%f%f%f%f%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
 	printf (" The sum is: %f\n",sum);
 	ans=sum/5;
 	printf ("The percent is: %f",ans);
 	return 0;

}

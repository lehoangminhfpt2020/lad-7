#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c=1;
	printf ("nhap so: ");
	scanf ("%d",&a);
	b=a+1;
	for (a=0;a<=b;a++)
	{
		printf ("\n");
		for (c=1;c<a;c++)
		{
		  printf("%d",c);
		}
	}

	return 0;
}

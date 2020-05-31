#include <stdio.h>
#include <stdlib.h>


int main() {
	char b;
	int a,n=0;
	printf("menu");
	printf("\n  1 capuchino         - 5$");
	printf("\n  2 capuchino caramel - 5$");
	printf("\n  3 Espresso          - 5$");
    
	do 
	{
		printf ("\n ban chon do uong nao: ");
		scanf ("%d",&a);
		n=n+1;	
		printf ("\n ban co muon goi them gi khong (Y/N) ");
		fflush(stdin);
		scanf ("%c",&b);	
	}
	while (b!='N');
	printf ("tong tien la: %d $ ",n*5);

	return 0;
}

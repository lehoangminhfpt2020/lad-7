#include <stdio.h>
#include <stdlib.h>


int main() {
	int luachon,tong,a=0,b=0,c=0;
	char ans,y;
    printf("menu");
	printf("\n  1 capuchino         - 5$");
	printf("\n  2 capuchino caramel - 10$");
	printf("\n  3 Espresso          - 15$");
	
	do
	{
	printf ("\n ban muon goi do uong gi:");
	scanf ("%d",&luachon);
	ans='y';
	
	  switch(luachon)
	    {
	        case 1:
	        a+=1;
	        printf("\n ban da chon %d capuchino ",a);
	        tong+=5;
	        break;
	        
			case 2:
	        b+=1;
	        printf("\n ban da chon %d capuchino caramel ",b);
	        tong+=10;
	        break;
	        case 3:
	        c+=1;
	        printf("\n ban da chon %d Espresso ",c);
	        tong+=15;
	        break;
        }
    
    printf ("\n ban co muon goi them khong (Y/N): ");
    fflush(stdin);
    ans = getchar();
    }
    while (ans=='Y'||ans=='y');
    {
    	
		printf (" tong tien: %d $",tong);
    	printf ("thank you ");
	}
	    
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main() {
	int a,b,c;
	
	printf("nhap diem ASM:");
	scanf("%d",&a);
	printf("nhap diem Practice:");
	scanf("%d",&b);
	printf("nhap diem Written:");
	scanf("%d",&c);	
	
	if (a<0||b<0||c<0||a>10||b>15||c>100)
	{
	printf ("\n hay nhap lai");
    }
    
    if(a>=4)
    {
    	printf ("\n ASM Pass");	
	}
	
	if(b>=6)	
	{
    	printf ("\n Practice Pass");	
	}
	
	if(c>=40)
    {
    	printf ("\n Written Pass");	
	}
	
	if(a<4)
    {
    	printf ("\n ASM Not Pass");	
	}
	
	if(b<6)	
	{
    	printf ("\n Practice Not Pass");	
	}
	
	if(c<40)
    {
    	printf ("\n Written Not Pass");	
	}	
	
	return 0;
}

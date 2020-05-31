#include <stdio.h>
#include <stdlib.h>


int main() {
	char ten,mk,ans;
	int sodu=10000;
	int luachon,ruttien,naptien;
    
	printf ("nhap ten nguoi dung: ");
	ten=getchar();
	fflush(stdin);
	printf ("\n nhap mat khau: ");
	mk=getchar();
    
    if(ten==123&&mk==123)
	{
	

    	printf ("\n dang nhap thanh cong! ");
    	
    do {
    	ans='y';
    	printf("\n nhap so de lua chon: ");
    	printf ("\n 1 = rut tien , 2 = nap tien, 3 = kiem tra so du");
    	fflush(stdin);
    	scanf("%d",&luachon);
    	switch(luachon){ 
    	    case 1:
    	    	printf ("\n nhap so tien ban muon rut:");
    	    	scanf ("%d",&ruttien);
    	    if(sodu>=ruttien)
			{
    	    printf ("ban da rut thanh cong: %d",ruttien);
    	    printf ("so du con: %d",sodu-ruttien);
			}
    	    else 
    	    printf ("tai khoan ko du tien de rut %d",ruttien);
    	    break;
    	    
    	    case 2:
    	    	printf ("\n nhap so tien ban muon nap:");
    	    	scanf ("%d",&naptien);
    	    	printf ("\n so du con: %d",sodu+naptien);
    	    	
		}
	printf ("ban muon lam them gi khong (Y/N): ");
	scanf ("%c",&ans);
    }
    
    while(ans=='N'||ans=='n');
    {
    	printf("giao dich ket thuc!");
	}
}
	return 0;
}

/*Klavyeden girilen m ve n say�s� i�in (m^n) hesaplayan algoritman�n ak�� diyagram�n� �iziniz.*/
#include <stdio.h>
int main(){
	int m,n;
	int i;
	int pow=1;
	printf("Taban degerini giriniz: ");
	scanf("%d",&m);
	
	printf("Us degerini giriniz: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		pow=pow * m;
	}
	printf("%d",pow);
}

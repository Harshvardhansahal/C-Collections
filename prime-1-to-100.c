/*2-100 aras�ndaki asal say�lar� ekrana yazd�ran algoritman�n ak�� diyagram�n� �iziniz*/
#include <stdio.h>
int main(){
	int sayi, sayac;
	int i;
	for(sayi=2;sayi<=100;sayi++){
		sayac=0;
		for(i=2;i<sayi;i++){
			if(sayi%i==0){
				sayac++;
			}
		}
		if(sayac==0){
			printf("%d ",sayi);
		}
	}
}

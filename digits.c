/*Maksimum 5 basamakl� say�n�n basamaklar�ndaki rakamlar� diziye atan ve ekrana basan
program� yaz�n�z.*/
#include <stdio.h>
#define N 5
int main(){
	int dizi[N];
	int sayi, digit;
	int i;
	
	printf("Maximum 5 basamakli bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=N;i++){
		if(sayi>0){
			digit = sayi % 10;
			sayi = sayi / 10;
			dizi[i] = digit;
		}
		else
			break;
	}
	for(i=N;i>0;i--){
		printf("%d, ",dizi[i]);
	}
}

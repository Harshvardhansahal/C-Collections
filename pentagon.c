/*Pentagon say�lar� Pn=n(3n-1)/2 form�l�ne g�re �retilmektedir. 100'den k���k pentagon
say�lar�n� ekrana yazd�r�n.*/
#include<stdio.h>
int main(){
	int i;
	int sayi;
	int pN;
	for(i=1;i<100;i++){
		pN=i*(3*i-1)/2;
		if(pN<100){
			printf("%d, ",pN);
		}
	}
}

/*8 elemanl� float diziye klavyeden de�er girin. Girilen de�erlerin ortalamas�n� hesaplay�p
ekrana yazd�r�n.*/
#include <stdio.h>
int main(){
	float dizi[8];
	float sum=0;
	float ortalama;
	int i;
	for(i=0;i<8;i++){
		scanf("%f",&dizi[i]);
		sum = sum + dizi[i];
	}
	ortalama = sum / 8;
	printf("ortalama = %.2f",ortalama);
}

/*Bir s�n�ftaki 10 ��rencinin boy ve kilo de�erlerini iki boyutlu diziye klavyeden okuyarak
aktaran ve ortalama boy ve kilo de�erlerini hesaplayarak ekrana yazd�ran program� C dili ile
yaz�n�z.*/
#include <stdio.h>
int main(){
	int dizi[10][2];
	int i, j;
	int kilo=0;
	int boy=0;
	float ortK, ortB;
	
	for(i=0;i<10;i++){
		printf("%d.nci ogrencinin boyu ve kilosu\n",i+1);
		for(j=0;j<2;j++){
			scanf("%d",&dizi[i][j]);
			
		}
	}
	for(i=0;i<10;i++){
		for(j=0;j<2;j++){
			if(j==0){
				kilo = kilo + dizi[i][j];
			}
			if(j==1){
				boy = boy + dizi[i][j];
			}
		}
	}
	ortK = kilo / 10 ;
	ortB = boy / 10;
	printf("ortalama kilo = %.2f ortalama boy = %.2f",ortK,ortB);
	
}

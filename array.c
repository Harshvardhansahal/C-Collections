/*Klavyeden -1 girilene kadar girilen say�lar� diziye aktaran, ard�ndan her eleman�n karesini
ekrana basan program� yaz�n�z. (Dizi eleman say�s� max 10 olacakt�r.)*/
#include <stdio.h>
#define N 10
int main(){
	int dizi[N];
	int i;
	int pow;
	for(i=0;i<N;i++){
		scanf("%d",&dizi[i]);
		if(dizi[i]!=-1){
			pow=dizi[i]*dizi[i];
			printf("pow = %d\n",pow);
		}
		else{
			break;
		}
	}
}


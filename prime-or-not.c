/*Bir say�n�n asal say� olup olmad���n� belirleyen algoritman�n ak�� diyagram�n� �iziniz.*/
#include<stdio.h>
int main()
{
    int i,sayi,sayac=0;
    printf("Sayiyi girin : ");
    scanf("%d",&sayi);
    
    for(i=2;i<sayi;i++)
    {
       if(sayi%i==0)
       {
           sayac++;
       }    
    }     
    
    if(sayac==0)
    {
        printf("Asal");                    
    }
    else
    {
        printf("Asal degil"); 
    }
}
/*#include <stdio.h>
int main(){
	int sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	if(sayi>=2){
		if(sayi%1==0 && sayi%sayi==0){
			printf("Sayi asaldir");
		}
		else
			printf("Sayi asal degildir");
	}

}*/


#include <stdio.h>
/*girilen iki say�n�n yerini de�i�tiren program*/
int main(){
	int A;
	int B;
	int temp;
	
	scanf("%d%d",&A,&B);
	printf("A= %d B= %d \n",A,B);
	
	temp=A;
	A=B;
	B=temp;
	
	printf("lastA= %d lastB= %d",A,B);
	
	return 0;
	
}

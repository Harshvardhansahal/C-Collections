#include <stdio.h>
/*kullan�c�n�n se�imi 1 ise �evre 2 ise ala� yazd�ran program*/
int main(){
	int PI=3;
	int r;
	int userChoice;
	int cevre;
	int alan;
	
	printf("Enter the radius ");
	scanf("%d",&r);
	
	printf("Choose any option ");
	scanf("%d",&userChoice);
	
	if( userChoice == 1){
		cevre = 2*PI*r;
		printf("cevre = %d",cevre);
	}
	else if( userChoice == 2){
		alan = PI*r*r;
		printf("alan = %d",alan);
	}
	else
		printf("Wrong input");
		
	return 0;
}

#include <stdio.h>
/*vize notunun %40�n�, final notunun %60�n� al�p ��rencinin numaras�yla birlikte yazd�ran program*/
int main(){
	int num;
	int vize;
	int final;
	int passGrade;
	
	printf("Enter student number ");
	scanf("%d",&num);
	
	printf("\nEnter vize grade ");
	scanf("%d",&vize);
	
	printf("Enter final grade ");
	scanf("%d",&final);
	
	passGrade = vize*0.4+final*0.6;
	
	printf("Student number = %d \nPass Grade = %d",num,passGrade);
	return 0;
}

#include "stdio.h"

int main()
{
	int sayi;
	printf("sayi yý giriniz\n");
	scanf("%d",&sayi);
	kup(sayi);




	return 0;
}
int kup(int a) 
{
	int sonuc;
	sonuc=a*a*a;
	printf("sonuc%d\n",sonuc);
	return sonuc;


}

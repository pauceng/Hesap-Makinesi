#include "stdio.h"

int main() {
	int sayi;
	printf("Bir sayi girin:\n"); scanf("%d",&sayi);
	kare(sayi);
	
	return 0;
}
int kare(int a)
{
	int sonuc;
	sonuc=a*a;
	printf("sonuc:%d\n",sonuc);
	return sonuc;

}
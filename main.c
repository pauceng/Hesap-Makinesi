#include "stdio.h"
void FaktHesap()
{
	int i,a,fakt;
	fakt=1;
	printf("Faktoriyeli alinacak sayiyi giriniz = ");
	scanf_s("%d",&a);
	for(i=1;i<=a;i++)
	{
	fakt = fakt *i;
	}
	printf("Sonuc = %d/n",fakt);
}
int main() {
	FaktHesap();
	return 0;
}

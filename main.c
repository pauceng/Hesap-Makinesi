#include "stdio.h"
#include <conio.h>
void FaktHesap()
{
	int i, a, fakt;
	fakt = 1;
	printf("Faktoriyeli alinacak sayiyi giriniz = ");
	scanf_s("%d", &a);
	for (i = 1; i <= a; i++)
		{
		fakt = fakt *i;
		}
	printf("%d! = %d", a ,fakt);
}
	int main() 
{
	FaktHesap();
	_getch();
	return 0;
}

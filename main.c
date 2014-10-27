#include <stdio.h>
#include <math.h>
#include <conio.h>
int mod(int sayi1, int sayi2)
{
	return sayi1%sayi2;
}
int main()
{
	int a, b;
	printf("Modu alinacak sayiyi giriniz:");
	scanf_s("%d", &a);
	printf("Modu giriniz:");
	scanf_s("%d", &b);
	printf("Sonuc:%d\n", mod(a, b));

	getch();
}
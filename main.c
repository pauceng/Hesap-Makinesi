#include <stdio.h>
#include <conio.h>
int topla(int,int);
int main() {

	int sayi1=0;
	int sayi2=0;
	
	printf("ilk sayiyi giriniz: ", sayi1);	
	scanf("%d", &sayi1);

	printf("ikinci sayiyi giriniz: ", sayi2);
	scanf("%d", &sayi2);
	int c = topla(sayi1,sayi2);
	printf("%d",c);
	scanf("%d",&sayi1);
return 0;
}

int topla(int a, int b) {


return a+b;
}

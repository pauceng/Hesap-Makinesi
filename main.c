#include "stdio.h"
#include <conio.h>
#include <math.h>
void log()
{
	float x;
	double sonuc;
	printf("Logaritmasini istedigin sayi?...: ");
	scanf("%f",&x);
	sonuc=log(x);
	printf("Logaritma %f = %f",x,sonuc);
}
int main() {
	log();
	return 0;
}

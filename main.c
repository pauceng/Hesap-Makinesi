#include <stdio.h>
#include <math.h>

int main()
{
	float sayi;
	double karekok;

	printf("Karekok icine alinacak sayiyi girin = ");
	scanf("%f",&sayi);

	karekok = sqrt(sayi);

	printf("%.0f sayisinin karekoku = %5.2f\n",sayi,karekok);

	return 0;
}
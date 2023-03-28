#include <stdio.h>
#include <stdlib.h>

float	Vin = 0.0;
float	Vled = 0.0;
float	Iled = 0.0;
float	R;

int	main(void)
{
	printf(" LED CALC v1.0 \n\n");
	printf(" Autor: Thiago Rodrigues\n\n");

	printf(" Digite o valor de Vin (em Volts): ");
	scanf("%f", &Vin);
	printf("\n\n");
        printf(" Digite o valor de Vled (em Volts): ");
        scanf("%f", &Vled);
        printf("\n\n");
        printf(" Digite o valor de Iled (em Amperes): ");
        scanf("%f", &Iled);
        printf("\n\n");

	R = (Vin - Vled) / Iled;

	printf("Vin = %.2f\n\n", Vin);
	printf("Vled = %.2f\n\n", Vled);
	printf("Vled = %.2f\n\n", Iled);
	printf("O resistor para o LED tem o valor de %.2f Ohms\n\n", R);
}

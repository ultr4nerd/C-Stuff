#include <stdio.h>
#include <math.h>
#define PI 3.14159

float areaCirculo(float radio){
	return PI*powf(radio,2);
}

int main(){
    float radio;
    printf("Ingresa el radio del circulo: ");
    scanf("%f", &radio);
    printf("El area de un circulo de radio %.2f es %.4f \n\n", radio, areaCirculo(radio)) ;
    return 0;
}

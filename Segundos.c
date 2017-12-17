#include <stdio.h>

int main(){
    int seconds;
    int dias = 0;
    int horas = 0;
    int minutos = 0;
    int segundos = 0;

    printf("Ingresa una cantidad en segundos: ");
    scanf("%i", &seconds);

    dias = seconds/86400;
    horas = (seconds - dias*86400)/3600 ;
    minutos = (seconds - horas*3600 - dias*86400)/60;
    segundos = seconds - minutos*60 - horas*3600 - dias*86400 ;


    printf("%i segundos es igual a %i dias, %i horas, %i minutos y %i segundos\n",seconds,dias,horas,minutos,segundos) ;
    
    return 0;
}

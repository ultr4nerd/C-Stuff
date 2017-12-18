#include <stdio.h>

int main(){

        int arreglo[100];
        int length,temp;
        
        do{
                printf("Ingrese el numero de datos que va a ingresar (minimo 1, maximo 100): ");
                scanf("%i", &length);

                if(length>100 || length<1)
                         printf("\nNo puedes ingresar un numero menor a 1 y mayor a 100\n");
        }while(length>100 || length<1);

        for (int i=0; i<length; i++){
                printf("Elemento %i del arreglo: ", i+1);
                scanf("%i", &arreglo[i]);
        }

        for(int i=0;i<length;i++)
                for(int i=0; i<length; i++)
                        for(int j=0; j<length-1; j++)
                                if (arreglo[j] > arreglo[j+1]){
                                        temp=arreglo[j];
                                        arreglo[j]=arreglo[j+1];
                                        arreglo[j+1]=temp;
                                }

        printf("\nElementos ordenados: \n");
        for(int i=0;i<length;i++)
                printf("%i: %i\n",i+1,arreglo[i]);

        return 0;
}
#include <stdio.h>
#include <math.h>

int main(){

      unsigned long int nMax;
      double pi,suma,denominador=1;

      printf("Terminos de la serie: ");
      scanf("%lu",&nMax);
 
      for (unsigned long int n=0;n<=nMax;n++){
         (n%2==0) ? pi = pi + (1/denominador) : pi = pi - (1/denominador);
         denominador += 2;
      }

      pi *= 4;
      printf("pi = %2.15f\n",pi);

   return 0;
}

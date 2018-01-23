#include <stdio.h>

int factorial(int n){
	if(n==0)
		return 1;
	else{
		int fact = n;
	
		for(int i=1;i<n;i++){
			fact = fact*i;
		}

		return fact;
	}
}

int main(){
	int n;
	
	printf("Introduce un numero n para calcular su factorial: ");
	scanf("%i",&n);
	printf("Resultado: %i\n",factorial(n));

	return 0;
}
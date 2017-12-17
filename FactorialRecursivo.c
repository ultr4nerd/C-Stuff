#include <stdio.h>

long factorial(int n){
    if (n >= 1)
        return n*factorial(n-1);
    else
        return 1;
}

int main(){
    int n;
    printf("\nIngresa un entero positivo: ");
    scanf("%d", &n);
    printf("El factorial de %d es igual a: %ld \n\n", n, factorial(n));
    return 0;
}


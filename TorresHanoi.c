#include <stdio.h>

int torreA[5];
int torreB[5];
int torreC[5];

void iniciarTorreCompleta(int torre[]){
	torre[0] = 5;
	torre[1] = 4;
	torre[2] = 3;
	torre[3] = 2;
	torre[4] = 1;
}

void iniciarTorreVacia(int torre[]){
	for(int i=0;i<5;i++)
		torre[i] = 0;
}

char torreACaracter(int torre[]){
	if(torre==torreA)
		return 'A';
	else if(torre==torreB)
		return 'B';
	else
		return 'C';
}

void moverDisco(int torreOrigen[],int torreDestino[]){
	int temp = 0;
	for(int i=4;i>=0;i--)
		if(torreOrigen[i]!=0){
			temp = torreOrigen[i];
			torreOrigen[i] = 0;
			break;
		}
	for(int i=0;i<5;i++)
		if(torreDestino[i]==0){
			torreDestino[i] = temp;
			break;
		}
	printf("%i -> %c\n",temp,torreACaracter(torreDestino));
}

void torresHanoi(int numeroDiscos,int torreOrigen[],int torreAuxiliar[],int torreDestino[]){
	if(numeroDiscos==1){
		moverDisco(torreOrigen,torreDestino);
	}else{
		torresHanoi(numeroDiscos-1,torreOrigen,torreDestino,torreAuxiliar);
		moverDisco(torreOrigen,torreDestino);
		torresHanoi(numeroDiscos-1,torreAuxiliar,torreOrigen,torreDestino);
	}
}


int main(){
    iniciarTorreCompleta(torreA);
    iniciarTorreVacia(torreB);
    iniciarTorreVacia(torreC);
    torresHanoi(5,torreA,torreC,torreB);

    return 0;
}


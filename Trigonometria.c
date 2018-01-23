# include <stdio.h>
# include <math.h> 
# include <stdlib.h>
# define PI 3.14159

int main (){
	float x;
	float sinX;
	float cosX;
	float tanX;
	const char* nombreArchivo = "trigonometricas.dat";
	FILE* archivo = fopen (nombreArchivo, "a");

	if (archivo==NULL) 
		return -1;

	fprintf (archivo, "Angulo Seno Coseno Tangente\n");
	
	for (int i=0;i<=360;i++){
		x=(i*(PI/180));
		sinX=sin(x);
		cosX=cos(x);
		tanX=tan(x);
			
		fprintf (archivo, "%d° %.4f %.4f %.4f\n",i,sinX,cosX,tanX);
	}

	fclose (archivo);

	return 0;

}
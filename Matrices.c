# include <stdio.h>

int main (){

	double lect[10][10];
	double lectura[10][10];
	double res[10][10];

	const char* nombrePrimerArchivo = "A.dat";
	FILE* primerArchivo = fopen(nombrePrimerArchivo,"r");

	if(primerArchivo==NULL) 
		return -1;

	for (int i=0;i<=9;i++)
		for (int j=0;j<10;j++)
			fscanf(primerArchivo,"%lf",&lect[i][j]);

	fclose(primerArchivo);

	const char* nombreSegundoArchivo = "B.dat";
	FILE* segundoArchivo = fopen(nombreSegundoArchivo,"r");

	if(segundoArchivo==NULL) 
		return -1;

	for (int i=0;i<10;i++)
		for (int j=0;j<10;j++)
			fscanf(segundoArchivo,"%lf",&lectura[i][j]);


	fclose(segundoArchivo);


	for (int i=0;i<10;i++)
		for (int j=0;j<10;j++)
			for (int k=0;k<10;k++)
				res[i][j]=res[i][j]+((lect[i][k])*(lectura[k][j]));

	const char* nombreTercerArchivo= "C.dat";
	FILE* tercerArchivo= fopen (nombreTercerArchivo, "a");

	if (tercerArchivo==NULL) 
		return -1;

	for (int i=0;i<10;i++){
		fprintf (tercerArchivo,"\n");

		for (int j=0;j<10;j++)
			fprintf(tercerArchivo,"%.2lf  ",res[i][j]);
	}

	fclose(tercerArchivo);

	return 0;
}
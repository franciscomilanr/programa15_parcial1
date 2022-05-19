/* 
Autor: Franciscomilan
Realizado: 21/02/2022
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa 15 en C que pide 20 numero y calcula la suma usando el 
ciclo for para la materia programacion estructurada 
*/

//Libreria
#include<stdio.h>

//Principal
int main() {
	//Variables
	float numero, suma=0;
	//Ciclo for
	for (int i=1; i<=20; i++) { 
		//Entrada de datos
		printf("Introduce el valor numero %d: ",i);
		scanf("%f",&numero);
		//Proceso
		suma=suma+numero; 
		}
	//Salida
	printf(" La suma es %.2f", suma);
	//Retorno	
	return 0;
}


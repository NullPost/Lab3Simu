
/* 
Autor: Mario Guerra
Compilador: gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado: gcc Problema6.c -o Problema6
Fecha: Wed Mar 25 20:11:24 CST 2020
Resumen: encuentra la n-esima serie parcial de 4 series
Entrada: una letra y hasta que n se quiere haces la serie
Salida:  un numero real
*/

//librerias
#include <stdio.h>
#include <math.h>
//numerar los pasos de pseudocodigo

//Cada serie de formulo como una funcion que hace la sumatoria indicada hasta el n-esimo termino

//serie del inciso a)
long int serieA(int n){
	long int a = 0;
	for(int i = 1; i < n + 1; i++){
	//	printf("%ld, ",a);
		a += i*i*(i-3);
	}
	return a;
}

//serie de inciso b)
double serieB(int n){
	double a;
	for(float i = 2; i <= n; i++){
	//	printf("%.2f, ", a);
		a += 3/(i-1);
	}
	return a;
}

//serie del inciso c)
float serieC(int n){
	float a = 0;
	for(int i = 1; i < n + 1; i++){
		a += 0.4472*(pow(1.618,i)-pow(-0.618,i));
	}
	return a;
}

//serie del inciso d) (Sucesion de Bode)
double sucesionBode(int n){
	double a = 0;
	for(int i = 2;i < n + 1; i++){
		a += 0.1*(3*pow(2, i - 2) + 4);
	}
}

int main(){
	//iniciando variables
	int seleccion;
	int x;
	//leer hasta donde llegara la sumatoria y que serie se utilizara
	printf("Seleccione serie:\n1) k^2(k-3), k = 1 a n\n2) 3/(k-1), k = 2 a n\n3) 1/sqrt(5)(phi^k - (1 - phi)^k)) k = 1 a n\n4) Sucesion de Bode de k = 2 a n\n");
	scanf("%d", &seleccion);
	printf("Seleccione ultimo coeficiente n: ");
	scanf("%d", &x);
	switch(seleccion){
		case 1:
			printf("Serie (1) (n = %d) = %ld\n", x, serieA(x));
			break;
		case 2:
			printf("Serie (2) (n = %d) = %.2f\n", x, serieB(x));
			break;
		case 3:
			printf("Serie (3) (n = %d) = %.2f\n", x , serieC(x));
			break;
		case 4:
			printf("Serie (4) (n = %d) = %.2f\n)",x , sucesionBode(x));
			break;
		default:
			printf("Entrada invalida, Realizar seleccion de nuevo\n");
			main();

	}
}


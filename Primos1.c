
/* Autor: Mario Guerra
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc Primos1.c -o Primos1
Fecha: Wed Mar 11 18:48:48 CST 2020
Resumen: Toma un numero y chequea si es primo o no
Entrada: Un entero
Salida:  Respuesta a la pregunta
*/

//librerias
#include <stdio.h>
//numerar los pasos de pseudocodigo
int N;

int main(){

	//Comando pregunta por el numero
	printf("Entrar numero:  ");
	scanf("%i", &N);
	//iniciamos a chequear si el numero es primo verificando su multiplicidad con 
	//los numeros del 2 hasta N - 1. Si alguno de ellos fuera a ser multiplo tenemos
	//un flga llamado 'primos', el cuan chequeamos al final si es 1 o 0. 
	int i = 2;
	int primo = 1;
	while(i  < N ){
		if(N%i == 0){
			primo = 0;
			break;
		}
		else{
			i++;
			continue;
		}

	}
	if(primo == 0){
		printf("El numero ingrsado no es primo \n");
	}
	else{
		printf("El numero ingresado es primo \n");
	}
	
	return 0;
	
}
		

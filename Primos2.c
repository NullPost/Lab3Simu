
/* Autor: Mario Guerra
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc Primos2.c -o Primos2
Fecha: Wed Mar 11 19:46:44 CST 2020
Resumen: Muestra los numeros primos de un dado rango
Entrada: Dos enteros
Salida:  Lista de primos
*/

//librerias
#include <stdio.h>
//numerar los pasos de pseudocodigo

//tener una funcion aparte que podamos acudir cada vez que neceitemos
//verificar si un numero es primo es necesario. esPrimo es in numero
//entero que sera 1 o 0 dependiendo del argumento
 
int esPrimo(int x){
	//inicando variables
	int i = 2;
	int primo;
	//empezamos un while loop
	while(i < x){
		if(x%i == 0){
			//si el argumento es multiplo de cualquier entero antes
			//de el es inmediatamente ignorado 
			primo = 0;
			break;
		}
		else{
			//esto mantiene a esPrimo igual a 1 mientras el numero
			//no sea multiplo de algo
			primo = 1;
			i++;
			continue;
		}
	}
	// al final utilizamos a la variable primo como
	// un flag y lo hacemos igual a nuestra funcion
	return primo;	
}

int main(){

	// este codigo se utilizo para verificar el funcionamiento 
	// correcto de la funcion esPrimo

	/*
	int j = 2;
	for(j; j < 30 ; j++){
		printf("%i", esPrimo(j));
	}
	
	*/
	
	
	//iniciando variables

	int n1;
	int n2;

	// preguntando al usuario el rango deseado
	printf("Ingresar limite inferior de rango: ");
	scanf("%i", &n1);
	printf("Ingresar limite superior de rango: ");
	scanf("%i", &n2);



	
	// El numero es impreso en el comando si esPrimo
	// lo marca como primo, de lo contrario se ignora
	for(n1; n1 < n2; n1++){
		if(esPrimo(n1) == 1){
			printf("%i ", n1);			
		}
		else{
			continue;
		}
	}

}	

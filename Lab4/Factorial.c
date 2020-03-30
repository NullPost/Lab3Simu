
/* 
Autor: Mario Guerra
Compilador: gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado: gcc Factorial.c -o Factorial
Fecha: Wed Mar 25 19:33:16 CST 2020
Resumen: Da el factorial de un numero entero
Entrada: un entero
Salida: un entero
*/

//librerias
#include <stdio.h>
//numerar los pasos de pseudocodigo
//La funcion recursiva funcina con el hecho que 0! = 1, n! = n*(n-1)!
long fact(long n){
	long res; 
	if(n == 0){
		res = 1;
	}
	else{
		res = n*fact(n-1);
	
	}
	return res;
}
	;
int main(){
	//iniciar variable que guarda la entrada del usuario
	int x;
	printf("Ingresar n: ");
	//leer entrada
	scanf("%d", &x);
	//imprimir resultado
	printf("%d! = %ld \n", x, fact(x));
}



/* 
Autor: Mario Guerra
Compilador: gcc (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0
Compilado: gcc Ordenar.c -o Ordenar
Fecha: Wed Mar 25 17:07:05 CST 2020
Resumen: Ordena 5 numeros dados por el usuario
Entrada: 5 eneros
Salida:  lista ordenada
*/

//librerias
#include <stdio.h>
//numerar los pasos de pseudocodigo
int main(){
	//iniciando variables 
	//a nos servira como un lugar temporal para almacenar datos
	int a;
	int lista[5];
	//leer los 5 valores del usuario
	for(int i = 0; i < 5; i++){
		printf("Ingresar valor %d: ", i + 1);
		scanf("%d", &lista[i]);
	}
	//imprimir el vecto original
	printf("\nValores ingresados:");
	for(int i = 0; i < 5; i++){
		printf(" %d", lista[i]);
	}
	//ordenar:
	//Se ordena los elementos de la siguente manera. se comparan dos elementos,
	//si el elemento de la derecha es menor de la izquierda cambian lugar. 
	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 5; j++){
			if(lista[i] < lista[j]){
				a = lista[i];
				lista[i] = lista[j];
				lista[j] = a;
			}
		}
	}
	//imprimir vector ordenado
	printf("\nLista Ordenada:");
         for(int i = 0; i < 5; i++){
                 printf(" %d", lista[i]);
        }
	printf("\n");
	
	return 0;
}
		

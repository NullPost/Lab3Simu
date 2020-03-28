
/* 
Autor: Mario Guerra
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc NumerosPares.c -o NumerosPares
Fecha: Wed Mar 25 16:07:06 CST 2020
Resumen: Muestra un vector de manera ascenditente o descendiente
Entrada: teclado del usuario
Salida:  Lista de numeros
*/

//librerias
#include <stdio.h>
#include <string.h>
//numerar los pasos de pseudocodigo
int main(){
	int lista[10]={2,4,6,8,10,12,14,16,18,20};
	char Input[10] = {'\0'};
	printf("Ingresar como mostrar lista \n a) Ascendiente \n d) Descendiente \n");
	fgets(Input, 10, stdin);
	if(strlen(Input) != 2){
		printf("Ingresar valor correcto\n");
		main();
	}
	else if(Input[0] == 'a'){
		for(int i = 0; i < 9; i++){
			printf("%d, ", lista[i]);
		}
		printf("%d\n", lista[9]);
	}
	else if(Input[0] == 'd'){
		for(int i = 9; i > 0; i--){
			printf("%d, ", lista[i]);
		}
		printf("%d\n", lista[0]);
	}
	else{
		printf("Ingrese valor correcto\n");
		main();
	}

	
	return 0;
}
		

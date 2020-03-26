
/* 
Autor: Mario Guerra
Compilador: gcc (Ubuntu 7.4.0-1ubuntu1~18.04.1) 7.4.0
Compilado: gcc NumerosPares.c -o NumerosPares
Fecha: Wed Mar 25 16:07:06 CST 2020
Resumen: Muestra un vector de manera ascenditente o descendiente
Entrada: teclado_del_usuario
Salida:  Lista_de_numeros
*/

//librerias
#include <stdio.h>
//numerar los pasos de pseudocodigo
int main(){
	int lista[10]={2,4,6,8,10,12,14,16,18,20};
	char I;
	printf("Ingresar como mostrar lista \n a) Ascendiente \n d) Descendiente \n");
	scanf("%c", &I);
	if(I == 'a'){
		
		for(int i = 0; i < 9; i++){
			printf("%d ", lista[i]);	
		}
		printf("%d \n", lista[9]);
	}
	else if(I == 'd'){
		for(int i = 9; i > 0 ; i--){
                	printf("%d ", lista[i]);
                }
		printf("%d \n", lista[0]);

		
	}
	else{
		printf("\n **Entrada Invalida** \n \n");
		main();
	}

	return 0;
}
		

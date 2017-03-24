/*
*NOMBRE:NUMEROS INVERTIDOS
*AUTOR:Luis Sebastian Urbano Luna
*FECHA: 23/Marzo/2017
*RESUMEN:Se muestran en la pantalla los numeros invertidos que estan dentro del vector
*/

#include <stdio.h>

int main(){
int i;
int vector[30] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
	for(i=29;i>=0;i--){
		printf("Numeros invertidos: %d\n",vector[i]);
	}
	return 0;
}

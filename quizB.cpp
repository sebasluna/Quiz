/*
*NOMBRE:NUMERO MAYOR Y MENOR DENTRO DE UN VECTOR
*AUTOR:Luis Sebastian Urbano Luna
*FECHA: 23/Marzo/2017
*RESUMEN:Se Ingresan los numeros por parte del usuario y luego este devuelve el mayor y el menor de los vectores
*/

#include <stdio.h>

int main(){
    int lNumero[100];
    int n,mayor=0,menor;
    printf("por favor ingrese la longitud del arreglo: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("ingrese posicion %d\n",i+1);
        scanf("%d",&lNumero[i]);

        if(lNumero[i] > mayor){
            mayor= lNumero[i];
        }
        if(lNumero[i] < menor){
            menor= lNumero[i];
        }
    }
    printf("El mayor elemento del vector es: %d\n",mayor);
    printf("El menor elemento del vector es: %d\n",menor);
    return 0;
}

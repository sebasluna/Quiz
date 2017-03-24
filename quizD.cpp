/*
*NOMBRE:IMPRIMIR NUMEROS ELEVADOS
*AUTOR:Luis Sebastian Urbano Luna
*FECHA: 23/Marzo/2017
*RESUMEN:el usuario debera ingresar numeros segun la longitud luego sera impreso cada numero elevado al cuadrado
*/
#include <stdio.h>
#include <math.h>

int main(){
int L;
int cuadrado,i,exponente=2;
int longitud[100];
printf("ingrese longitud: ");
scanf("%d",&L);
    for(i=0; i<L; i++){
        printf("ingrese valor en la posicion %d\n",i);
        scanf("%d",&longitud[i]);
    }
    for(i=0; i<L; i++){
    cuadrado=pow(longitud[i],2);
    printf("la posicion %d tiene un cuadrado: %d^%d = %d\n",i,longitud[i],exponente,cuadrado);
    }

    return 0;
}

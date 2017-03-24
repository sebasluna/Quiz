/*
*NOMBRE:NUMEROS PRIMOS
*AUTOR:Luis Sebastian Urbano Luna
*FECHA: 23/Marzo/2017
*RESUMEN:el suario debera ingresar 5 numeros y luego se verificaran si son primos
*/

#include <stdio.h>

int main(){
int primos[5];
int num,i;
printf("ingrese un numero: ");
scanf("%d",&num);
    for(i=1; i<=num ;i++){
            if(num%i==0){
                primos[i]+=1;
            }if(primos[i]>2){
        }
    }
    if(primos[i]==2){
        printf("El numero es primo");
            }else{
                printf("El numero no es primo");
        }
    return 0;
}


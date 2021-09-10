//RAMÍREZ PALAO MANUEL
//constante global
//Use el radio de prueba de 10
//El resultado del area es 314.159271 cuando el radio es 10.000000
#include <stdio.h>
#include <math.h>
const float pi = 3.141592654;
int main(){
    float a,r;
    printf("Este programa es para calcular el area de un circulo");
    printf("\n Ingrese el radio para calcular el area: ");
    scanf("%f",&r);
    a = pi*(pow(r,2));
    printf("El resultado del area es %f cuando el radio es %f",a,r);
    return 0;
}

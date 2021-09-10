//RAMÍREZ PALAO MANUEL
//Use el diametro de prueba de 10
//El resultado del area es 78.539818 cuando el radio es 10.000000
//constante local
#include <stdio.h>
#include <math.h>

int main(){
    const float pi = 3.141592654;
    float a,d;
    printf("Este programa es para calcular el area de un circulo");
    printf("\n Ingrese el diametro para calcular el area: ");
    scanf("%f",&d);
    a = pi*(pow(d,2))/4;
    printf("El resultado del area es %f cuando el diametro es %f",a,d);
    return 0;
}

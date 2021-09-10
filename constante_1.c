// RAMÍREZ PALAO MANUEL
#include <stdio.h>
//const float pi = 3.141592654;
//#define pi 3.141592654
//#include <math.h>
int main(){

    float r,h,v,pi = 3.141592654; //El valor de pi es una constante local
    printf("\n Este programa calcula el volumen de un cilindro \n");
    printf("\n Dame el valor del radio: ");
    scanf("%f",&r);
    printf("\n Dame el valor de la altura: ");
    scanf("%f",&h);
    v = pi*(r*r)*h;
    printf("\n El resultado de el volumen es: %f",v);
    return 0;
}

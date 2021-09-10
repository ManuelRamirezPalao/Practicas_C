//RAMÍREZ PALAO MANUEL
#include <stdio.h>
#include <math.h>

int main(){
    float a,c,s,t;
    printf("\n Este prgorma calcula el seno coseno y tangente \n");
    printf("\n \t \" El resultado que obtenemos es en radianes \"");
    printf("\nDame el valor del angulo para calcular seno: ");
    scanf("%f",&a);
    s = sin(a);
    printf("\n Dame el valor del angulo para calcular coseno: ");
    scanf("%f",&a);
    c = cos(a);
    printf("\n Dame el valor del angulo para calcular tangente: ");
    scanf("%f",&a);
    t =tan(a);
    printf("El valor de seno es %f \nEl valor de coseno es %f \n El valor de tangente es %f",s,c,t);
    return 0;
    }

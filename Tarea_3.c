//RAMÍREZ PALAO MANUEL
//Prueba de 10, 80 y 8
//Tarea de Ecuacion cuadratica
//El resutlado de x1 es: -0.114128
//El valor de x2 es: -7.885872
#include <stdio.h>
#include <math.h>

int main(){

    float a,b,c,x1,x2,raiz;
    printf("Este programa calcula una ecuacion cuadratica con la formula general");
    printf("\n Ingresa el valor de a en la ecuacion: ");
    scanf("%f",&a);
    printf("\n Ingresa el valor de b en la ecuacion: ");
    scanf("%f",&b);
    printf("\n Ingresa el valor de c en la ecuacion: ");
    scanf("%f",&c);
    raiz = sqrt(pow(b,2)-4*a*c);
    x1 = (-b+raiz)/(2*a);
    x2 = (-b-raiz)/(2*a);
    printf("\n El resutlado de x1 es: %f \n El valor de x2 es: %f ",x1,x2);
    return 0;
}

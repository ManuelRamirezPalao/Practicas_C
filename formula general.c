//RAMÍREZ PALAO MANUEL
#include <stdio.h>
#include <math.h>

int main(){

    float a = 10,b = 25,c = 5,x1 ,x2,raiz;
    printf("Este programa calcula una ecuacion cuadratica con la formula general");
    raiz = sqrt(b*b-4*a*c);
    x1 = (-b+raiz)/(2*a);
    x2 = (-b-raiz)/(2*a);
    printf("\n El resutlado de x1 es: %f \n El valor de x2 es: %f ",x1,x2);

}

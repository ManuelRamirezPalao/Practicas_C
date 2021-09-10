//RAMÍREZ PALAO MANUEL

#include <stdio.h>

int main(){
    float n1,n2,r;
    printf("\n Bienvenido a una calculadora basica \n");
    printf("\n \t \t SUMA \n");
    printf("\n Ingresa el primer valor a sumar: ");
    scanf("%f",&n1);
    printf("\n Ingresa el segundo valor: ");
    scanf("%f",&n2);
    r = n1 + n2;
    printf("\n El resultado de la suma es: %f",r);
    printf("\n \t \t RESTA \n");
    printf("\n Ingresa el primer valor a restar: ");
    scanf("%f",&n1);
    printf("\n Ingresa el segundo valor: ");
    scanf("%f",&n2);
    r = n1 - n2;
    printf("\n El resultado de la resta es: %f",r);
    printf("\n \t \t MULTIPLICACION \n");
    printf("\n Ingresa el primer valor a multiplicar: ");
    scanf("%f",&n1);
    printf("\n Ingresa el segundo valor: ");
    scanf("%f",&n2);
    r = n1 * n2;
    printf("\n El resultado de la multiplicacion es: %f",r);
    printf("\n \t \t DIVISION \n");
    printf("\n Ingresa el primer valor a dividir: ");
    scanf("%f",&n1);
    printf("\n Ingresa el segundo valor: ");
    scanf("%f",&n2);
    r = n1 / n2;
    printf("\n El resultado de la division es: %f",r);
    return 0;


}

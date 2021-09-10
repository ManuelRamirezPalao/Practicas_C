//RAMIREZ PALAO MANUEL

#include <stdio.h>

int main(){

    int a,b,c;
    printf("Este programa nos calcula el residuo \n");

    printf("\n Dame el primer valor:  ");

    scanf("%d",&a);

    printf("\n Dame el segundo valor:  ");

    scanf("%d",&b);

    c = a % b;

    printf("\n El valor del numerador es : %d \n El valor del denominador es: %d",a,b);

    printf("\n El residuo es: %d ",c);

    return 0;
}

// RAMÍREZ PALAO MANUEL
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
int main(){
    char a[256];
    char b;
    char decision;
    char str[]= "multiplicacion\n";
    int j;
    float n1,n2,r;
    printf("\t \t \t Bienvenido a la calculadora mejorada");
    printf("\n A continuacion elegiras la operacion que necesitas: ");
    scanf("%c",&a);
    j=0;
    while(a[j]){
    b = a[j];
    decision = tolower(b);
    j++;
    }
    if(decision == str){
        printf("\n Ingresa el primer numero a multiplicar: ");
        scanf("%f",&n1);
        printf("\n Ingresa el segundo numero: ");
        scanf("%f",&n2);
        r = n1*n2;
        printf("\n El resultado de la multiplicacion es: %f ",r);
    }
    else{
        printf("Ingresa una opcion valida");
    }
    return 0;



}

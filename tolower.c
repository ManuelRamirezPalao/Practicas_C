//RAMÍREZ PALAO MANUEL
#include <stdio.h>
#include <ctype.h>

int main(){
char str[256];
    char ch;
    int j = 0;
    printf("Ingresa una palabra a convertir en miniscula: ");
    scanf("%s",str);
    while (str[j]){
        ch = str[j];
        putchar(tolower(ch));
        j++;
}

return 0;
}

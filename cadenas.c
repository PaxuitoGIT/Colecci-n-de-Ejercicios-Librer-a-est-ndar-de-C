#include <string.h>
#include <stdio.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Mundo";

    int comparison = strcmp(str1, str2);

    if (comparison == 0) {
        printf("Las cadenas son iguales\n");
    } else {
        printf("Las cadenas son diferentes\n");
    }

    char str[] = "Hola Mundo";

    size_t lenght = strlen(str);

    printf("La longitud de la cadena es %zu\n", lenght);

    return 0;

    }
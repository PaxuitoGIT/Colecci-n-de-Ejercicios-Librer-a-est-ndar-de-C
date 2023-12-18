#include <stdio.h>

int main() {
    FILE *file = fopen("archivo.txt", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo\n");
        return 1;
    }

    fprintf(file, "Hola Mundo\n");

    fclose(file);

    return 0;
}
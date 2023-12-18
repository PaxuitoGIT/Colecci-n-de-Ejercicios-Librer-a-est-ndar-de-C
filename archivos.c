#include <stdio.h>

int main() {
    FILE *file = fopen("archivo.txt", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo\n");
        return 1;
    }

    fprintf(file, "Hola Mundo\n");

    fclose(file);

    file = fopen("archivo.txt", "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo\n");
        return 1;
    }

    char buffer[255];
    fscanf(file, "%s", buffer);

    printf("Leido del archivo: %s\n", buffer);

    fclose(file);

    return 0;
}
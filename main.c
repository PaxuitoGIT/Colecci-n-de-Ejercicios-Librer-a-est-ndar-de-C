#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int num = -10;

    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

    srand(time(NULL));

    int random_number = rand() % 100;
    printf("El numero aleatorio es %d\n", random_number);

    return 0;
}
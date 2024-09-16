#include <stdio.h>

int main() {
    static int meuVetorDeInteiros [5] = {44, 405, 99, 403, 404};
    printf("Valor do Indice 0: %d \n", meuVetorDeInteiros[0]);
    printf("Valor do Indice 5: %d \n", meuVetorDeInteiros [4]);
    return 0;
}

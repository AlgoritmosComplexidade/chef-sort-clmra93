#include <stdio.h>
#include <string.h>

void ordenarLista (char *lista[], int n) {
    int i, j, trocou;
    int comp = 0, trocas = 0;
    char *temp;

    for (i = 0; i < n - 1; i++) {
        trocou = 0;
        for (j = 0; j < n - i - 1; j++) {
            comp ++;
            if (strcmp(lista[j], lista[j + 1]) > 0) {
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
                trocas ++;
                trocou = 1;
            }
        }
        if (!trocou) break;
    }
    printf("\nMétricas: Comparacoes: %d | Trocas: %d\n", comp, trocas);
}

int main() {
    char *lista[5] = {"Tomate", "Cebola", "Alho", "Manjericão", "Azeite"};
    int n = 5;
    int i;

    printf("Lista não ordenado\n");
    for (i = 0; i < n; i++) {
        printf("%s ", lista[i]);
    }
    printf("\n");

    ordenarLista(lista, n);

    printf("Lista ordenado\n");
    for (i = 0; i < n; i++) {
        printf("%s ", lista[i]);
    }
    printf("\n");

    return 0;
}

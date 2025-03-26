#include <stdio.h>


int main() {
    printf("Estado (A-H): ");
scanf(" %c", &carta->estado);

printf("Código da Carta (A01): ");
scanf("%s", carta->codigo);

printf("Nome da Cidade: ");
scanf(" %[^\n]", carta->nomeCidade); // Lê até a nova linha

printf("População: ");
scanf("%d", &carta->populacao);

printf("Área (em km²): ");
scanf("%f", &carta->area);

printf("PIB (em bilhões de reais): ");
scanf("%f", &carta->pib);

printf("Número de Pontos Turísticos: ");
scanf("%d", &carta->pontosTuristicos);
    return 0;
}

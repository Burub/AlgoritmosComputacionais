//2. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o vetor, o maior elemento e a posição que ele se encontra.
#include <stdio.h>
int main() {
    //i - núm percorre o vetor
    //m - maior, p - posição
    int i, j, m, p = 0, v[10];
    //Armazena os números no vetor
    for(i=0; i<10; i++){
        printf("Número: ");
        scanf("%d", &v[i]);
    }
    //Imprime o vetor
    printf("Vetor: [");
    for(i=0; i<10; i++){
        printf("%d ", v[i]);
    }
    printf("]");
    //Checa o maior valor
    
    printf("\nMaior: %d e Posição: %d\n", m, p);
    return 0;
}
//4.Escreva um programa que leia uma temperatura em graus Farenheit e a imprima na tela em graus Centígrados. A conversão de graus Farenheit para Centígrados é obtida por c=(5/9)(f-32)
#include <stdio.h>
int main() {
    float f, c;
    
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &f);
    
   c = (f-32) * 5/9;

    printf("%.2f F é igual a %.2f C", f, c);
    return 0;
}

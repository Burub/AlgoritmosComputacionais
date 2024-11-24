//6.Faça um programa que pergunte ao usuário um ano (n) e como resposta mostre na tela se esse ano é bissexto ou não. Caso negativo, mostre o próximo ano bissexto maior que (n).
#include <stdio.h>
int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);
    //Verifica se o ano é bissexto
    if(ano % 4 == 0 && ano % 100 != 0){
        printf("O ano é bissexto\n");
    }
    else{   //Se não for, vai somar +1 ao ano até encontrar o próximo ano bissexto
        printf("O ano não é bissexto.\n");
        ano++;
        //Checa se é bissexto
        if(ano % 4 == 0 && ano % 100 != 0){
            printf("O próximo ano bissexto é %d.\n", ano);
        }
        else{   //Se não for soma mais um ano e verifica
            ano++;
            if(ano % 4 == 0 && ano % 100 != 0){
                printf("O próximo ano bissexto é %d.\n", ano);
            }
            ano++;
            if(ano % 4 == 0 && ano % 100 != 0){
                printf("O próximo ano bissexto é %d.\n", ano);
            }
        }

    }
    return 0;
}

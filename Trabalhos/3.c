//3. Escreva um algoritmo que pergunte o nome e a idade de um indivíduo e imprima (aproximadamento) quantos dias de vida ele possui, considerando 99 anos de vida máxima.
#include <stdio.h>
int main() {
    char nome[30];
    int idade, dias;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade > 0 && idade < 100){
        dias = idade*365;
        printf("Olá %s, tu tens %d anos de vida, que correspondem a um pouco mais do que %d dias de vida.", nome, idade, dias);
    }
    else{
        printf("Idade inválida, digite uma idade maior que 0 e de no máximo 99 anos.");
    }
    return 0;
}

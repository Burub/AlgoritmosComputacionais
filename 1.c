//Escreva um algoritmo que pergunte o salário mensal atual de um funcionário e o percentual de reajuste. Calcular e mostrar na tela o valor do novo salário.
#include <stdio.h>
int main(){
    float salario, reajuste, salarioNovo;

    printf("Salário atual: \n");
    scanf("%f", &salario);

    printf("Percentual de reajuste: \n");
    scanf("%f", &reajuste);

    salarioNovo = salario + (salario * reajuste/100);
    printf("Salário antigo: R$%.2f\nPercentual de reajuste: %.2f %\nNvoo salário R$%.2f\n", salario, reajuste, salarioNovo);

    return 0;
}

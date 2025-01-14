//TRABALHO FINAL - B - 1
#include <stdio.h>
int main() {
  //Declaracoes
  char sobnom[30], status[12];
  int senha = 1234;
  int psw, mat, i;
  float nota[4], soma, media;

//1. Pedir o sobrenome e matricula
  printf("Digite o sobrenome: ");
  scanf("%s", &sobnom);
  printf("Digite a matrícula: ");
  scanf("%d", &mat);
//2. Pedir senha de acesso (repetir enquanto estiver errada)
  do{
    printf("Senha: \n");
    scanf("%d", &psw);
  } while(psw != senha);
//3. Cadastrar 4 notas
  for(i=0; i<4; i++){
    printf("Nota %d: \n", i+1);
    scanf("%.2f", &nota[i]);
    soma = soma + nota[i];
  }
//Funcao calcular media
  float CalMed(float soma){
    return soma/4;
  }
  return 0;
}

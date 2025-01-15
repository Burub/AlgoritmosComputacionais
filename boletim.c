#include <stdio.h>
int main() {
// Declaracoes:
	char sobnom[20], status[4];
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
		printf("Senha: ");
		scanf("%d", &psw);
	} while(psw != senha);

//3. Cadastrar 4 notas
	for(i=0; i<4; i++){
		printf("Nota %d: \n", i+1);
		scanf("%f", &nota[i]);
		soma += nota[i];
	}
	
// Funcao calcular media
	float CalMed(float soma) {
		return soma/4;
	}

//5. Imprimir boletim na tela
	printf("******************************************\n");
	printf("*   -- BOLETIM DE %s - %d --\n", sobnom, mat);
	printf("*   Media do aluno é %.2f \n", CalMed(soma));

//4. Casos de aprovacao materia individual
//1-aprovado 2-exame 3-reprovado
	for(i=0; i<4; i++){
		if(nota[i] >= 7){
			printf("*   Disciplina %d: ", i+1);
			printf("APROVADO\n");
			status[i] = 1;
		}
		else if(nota[i] >= 5 && nota[i] <= 6.99){
			printf("*   Disciplina %d: ", i+1);
			printf("RECUPERAÇÃO\n");
			status[i] = 2;
		}
		else if(nota[i] < 5){
			printf("*   Disciplina %d: ", i+1);
			printf("EXAME\n");
			status[i] = 3;
		}
	}
	printf("******************************************\n");

//Checa se foi aprovado em tudo ou nao
	if((status[0] == 1) && (status[1] == 1) && (status[2] == 1) && (status[3] == 1)){
		printf("-> Boas férias!");
	}
	else if((status[0] == 2) || (status[1] == 2) || (status[2] == 2) || (status[3] == 2)){
		printf("-> Confira dia do exame");
	}
	else if((status[0] == 3) || (status[1] == 3) || (status[2] == 3) || (status[3] == 3)){
		printf("-> Ano que vem tem de novo");
	}
	
	return 0;
}

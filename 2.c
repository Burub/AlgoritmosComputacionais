//2. Crie um algoritmo para ler 10 números e ao final informar quantos números estão no intervalo entre 10 (inclusive) e 100 (inclusive).
#include <stdio.h>
int main() {
    int n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, i;
    i = 0;

    printf("Digite um número: ");
    scanf("%d", &n0);
    printf("Digite um número: ");
    scanf("%d", &n1); 
    printf("Digite um número: ");
    scanf("%d", &n2);
    printf("Digite um número: ");
    scanf("%d", &n3);
    printf("Digite um número: ");
    scanf("%d", &n4);
    printf("Digite um número: ");
    scanf("%d", &n5);
    printf("Digite um número: ");
    scanf("%d", &n6);
    printf("Digite um número: ");
    scanf("%d", &n7);
    printf("Digite um número: ");
    scanf("%d", &n8);
    printf("Digite um número: ");
    scanf("%d", &n9);

    if(n0 >= 10 && n0 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n0);
    }
    if(n1 >= 10 && n1 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n1);
    }
    if(n2 >= 10 && n2 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n2);
    }
    if(n3 >= 10 && n3 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n3);
    }
    if(n4 >= 10 && n4 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n4);
    }
    if(n5 >= 10 && n5 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n5);
    }
    if(n6 >= 10 && n6 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n6);
    }
    if(n7 >= 10 && n7 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n7);
    }
    if(n8 >= 10 && n8 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n8);
    }
    if(n9 >= 10 && n9 <= 100){
        i++;
        printf("%d está contido no intervalo\n", n9);
    }
    
    printf("Há %d número(s) no intervalo entre 10 e 100.", i);

    return 0;
}

//5.Escreva um programa que leia três valores inteiros diferentes, determine e imprima o menor entre eles.
#include <stdio.h>
int main() {
    int v1, v2, v3;
    
    printf("Valor 1: ");
    scanf("%d", &v1);
    printf("Valor 2: ");
    scanf("%d", &v2);
    printf("Valor 3: ");
    scanf("%d", &v3);

    if(v1 < v2 && v1 < v3){
        printf("%d é o menor valor", v1);
    }
    if(v2 < v1 && v2 < v3){        
        printf("%d é o menor valor", v2);
    }
    if(v3 < v1 && v3 < v2){        
        printf("%d é o menor valor", v3);
    }
    if(v1 == v2 && v1 == v3){        
        printf("Todos números são iguais.");
    }
    if(v1 == v2 && v1 < v3){
        printf("%d e %d são menores", v1, v2);
    }
    if(v1 == v3 && v1 < v2){
        printf("%d e %d são menores", v1, v3);
    }
    if(v2 == v3 && v2 < v1){
        printf("%d e %d são menores", v2, v3);
     }

    return 0;
}

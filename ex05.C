#include <stdio.h>

int main() {
    int num1;
    int num2;
    int med;
    char nome[50];
    printf("Digite o nome do aluno\n:");
    scanf("%s",&nome);
    printf("Digite o valor da primeira nota:");
    scanf("%d",&num1);
    printf("Digite o valor da segunda nota:");
    scanf("%d", num2);
    printf("O nome do aluno é %s \n", nome);
    med = (num1 + num2) / 2;
    if (med >= 6){
        printf("O aluno foi aprovado!");
    }else{
        printf("O aluno foi reprovado.");
    }
    return 0;
    } 

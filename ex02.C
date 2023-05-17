#include <stdio.h>

int main() {
    int num1, num2, num3;
    int soma;
    printf("Digite um valor:");
    scanf("%d",&num1);
    printf("Digite um segundo valor:");
    scanf("%d",&num2);
    printf("Digite um terceiro valor:");
    scanf("%d",&num3);
    soma = num1 + num2 + num3;
    if (soma / 3){
        printf("O número é multiplo de 3!");
    } else{
        printf("O número não é multiplo de 3!");
    } 
    return 0;
}
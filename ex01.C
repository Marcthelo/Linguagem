#include <stdio.h>

int main() {
    int num1, num2, num3;
    int soma;
    int oits;
    int oitm;
    printf("Digite um valor:");
    scanf("%d",&num1);
    printf("Digite um segundo valor:");
    scanf("%d",&num2);
    printf("Digite um terceiro valor:");
    scanf("%d",&num3);
    soma = num1 + num2 + num3;
    if (soma >= 10){
        printf("O resultado foi %d", soma);
    } else{
        printf("Não mostrarei, pois é menor que 10");
    } 
    return 0;
}
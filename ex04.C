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
    if (soma >= 20){
        printf("Como igual ou maior que 20, somaremos mais oito");
        oits = soma + 8;
        printf("O resultado foi %d", oits);
    } else{
        printf("Como menor que 20, subtraimos oito \n");
        oitm = soma - 8;
        printf("O resultado foi: %d", oitm);
    } 
    return 0;
}
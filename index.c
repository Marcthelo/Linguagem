#include <stdio.h>
#include <stdio.h>
int main() {
int escolha;
printf("Digite W para Windows ou fazuoelly L para Linux \n");
scanf("%d", &escolha);

switch(escolha){
    case 1:
    printf("Sistema operacional escolhido: Windows");
    break;
    case 2:
    printf("Sitema operacional escolhido: Linux fezuelly");
    break;
    default:
    printf("Escolha inválida");
}
return 0;
}
#include <stdio.h>
// Crie uma calculadora

int main(){

float a, b;
int opcao;
printf("Digite dois valores: \n");
scanf("%f %f", &a, &b);

do {
    printf("\nDigite a opcao que voce deseja: \n");
    printf("1. Soma\n");
    printf("2. Subtracao \n");
    printf("3. Multiplicacao \n");
    printf("4. Divisao \n");
    printf("5. Limpar valores\n");
    printf("0. Sair\n");
    scanf("%i", &opcao);

    if (opcao == 1){
        float soma = a + b;
        printf("A soma dos valores e: %.2f", soma);
    } 
    else if (opcao == 2){
        float subtracao = a - b;
        printf("A subtracao dos valores e: %.2f", subtracao);
    } 
    else if (opcao == 3){
        float multiplicacao = a * b;
        printf("A multiplicacao dos valores e: %.2f", multiplicacao);
    } 
    else if (opcao == 4){
        float divisao = a / b;
        printf("A divisao dos valores e: %.2f", divisao);
    } 

} while (opcao != 0); {

}

}
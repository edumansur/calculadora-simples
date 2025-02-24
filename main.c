#include <stdio.h>

int main(){

    printf("===============================================\n");
    printf("CALCULADORA SIMPLES v1.0\n");
    printf("CODADA POR: EDURADO MANSUR\n");
    printf("===============================================\n");

    //Declarando as variáveis
    int num1, num2, resultado;
    char operacao;

    //Verificações de numeros positivos e operações válidas
    while (1){

        //Interação com o usuário¹
        printf("Digite o valor 1: ");
        scanf("%d", &num1);

        if (num1 < 0){
            printf("Numero invalido, tente novamente!\n");
            continue;
        }

        break;
    }

    while(1){
        
        //Interação com o usuário²
        printf("Digite o valor 2: ");
        scanf("%d", &num2);

        if (num2 < 0){
            printf("Numero invalido, tente novamente!\n");
            continue;
        }

        break;

    }

    while (1){
        //Interação com o usuário³
        printf("Selecione a operacao matematica desejada [+, -, / ou *]: ");
        scanf(" %c", &operacao);

        if (operacao == '+' || operacao == '-' || operacao == '/' || operacao == '*'){
            break;
        } else{
            printf("Operacao invalida! Tente novamente.");
            continue;
        }

    }
    
    //Bloco de código dos cálculos
    if (operacao == '+'){
        resultado = num1 + num2;
        printf("Resultado: %d + %d = %d\n", num1, num2, resultado);
    } else if (operacao == '-'){
        resultado = num1 - num2;
        printf("Resultado %d - %d = %d\n", num1, num2, resultado);
    } else if (operacao == '/'){
        double div = ((float) num1 / num2);
        double resto = num1 % num2; 
        printf("Resultado %d / %d = %lf\n", num1, num2, div);
        printf("Resto da divisao = %lf", resto);
    } else if (operacao == '*'){
        resultado = num1 * num2; 
        printf("Resultado %d * %d = %d\n", num1, num2, resultado);
    } else {
        printf("Operacao inválida!");
        return 1;

    }

    return 0;
    
}

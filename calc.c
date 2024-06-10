// Coded by Ivo - 02/04/24 -- Programando uma calculadora 

#include <stdio.h>

int main() {
    
    int opc, qtde;  // Variavel que captura a escolha de menu do usuario
    float num1, num2, media, acumulador;
    
    printf("*********** MENU CALCULADORA ***********");
    printf("\n1) Adição");
    printf("\n2) Subtração");
    printf("\n3) Multiplicação");
    printf("\n4) Divisão");
    printf("\n5) Potência");
    printf("\n6) Média");	
    printf("\n7) Sair\n");
    printf("\n****************************************\n");
    
    printf("\nDigite a opção desejada: ");
    scanf("%9d", &opc);
    
    /* Se deixar tudo if, independente da opcao ele carrega a primeira.
    se usa então um if composto. 
    
    OPERADORES LÓGICOS: 
    && = E 
    || = OU
    ! = NÃO/DIFERENTE
    
    Para aparecer ou não as escolhas dos numeros caso o 
    usuario nao queira sair.  */
    if (opc >= 1 && opc <= 4){
        printf("\nDigite o primeiro número: ");
        scanf("%f", &num1);
    
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
    } 
	
	if (opc == 5) {
        printf("\nDigite a base: ");
        scanf("%f", &num1);
    } 
    
    if (opc == 6) {
        acumulador = 0;
        num1 = 1;
    
        while (num1!= 0) {
            printf("Digite o numero ou digite 0 para ver a soma: ");
            scanf("%f", &num1);
            acumulador = num1+acumulador;
            qtde++;
        }
        
        if (num1 == 0) {
            printf("Apresentando a soma...\n");
            qtde--;
            printf("O usuario digitou %d numeros e a soma é: %.2f\n", qtde--, acumulador);
        
            if (acumulador == 0 || qtde == 0) {
                printf("Não é possível fazer essa média.");
            } if (acumulador != 0 && qtde != 0) {
                media = acumulador / qtde;
                printf("A média de todos os números é: %.2f", media);
            }
        }
        return 0;
    }
    
    // Caso o usuario digite algo maior que 5 ou menor que 0.  
    if (opc > 8 || opc <= 0) {
        printf("Opção Inválida.");
        return 0;
    }
    
    if (opc == 7) {
        printf("Saindo...");
        return 0;
    } 
    
    // if encardeado: testa várias condições
    if (opc == 1) {  // == é 'se for igual' 
        printf("\n%.2f + %.2f = %.2f", num1, num2, num1+num2);
    }
    
    if (opc == 2) {
        printf("\n%.2f - %.2f = %.2f", num1, num2, num1-num2);
    }
    
    if (opc == 3) {
        printf("\n%.2f x %.2f = %.2f", num1, num2, num1*num2);
    }
    
    if (opc == 4) {
        printf("\n%.2f ÷ %.2f = %.2f", num1, num2, num1/num2);
    }
	
	if (opc == 5) {
        printf("\n%.2f ao quadrado = %.2f", num1, num1*num1);
    }
}

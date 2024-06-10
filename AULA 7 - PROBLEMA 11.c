// Coded by Ivo - 02/04/24 -- Programando uma calculadora 2  

#include <stdio.h>

int main() {
    
    int opc;  // Variavel que captura a escolha de menu do usuario
    float num1, num2;
    
    printf("*********** MENU CALCULADORA ***********");
    printf("\n1) Adição");
    printf("\n2) Subtração");
    printf("\n3) Multiplicação");
    printf("\n4) Divisão");
    printf("\n5) potência");
    printf("\n6) Sair\n");
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
    
    // Caso o usuario digite algo maior que 5 ou menor que 0.  
    if (opc > 6 || opc <= 0) {
        printf("Opção Inválida.");
        return 0;
    }
    
    if (opc == 6) {
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
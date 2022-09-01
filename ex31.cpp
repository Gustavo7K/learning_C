/* 41) Dado um número inteiro indicando uma operação num caixa eletrônico, informe a opção 
correspondente: 1 - saldo, 2 - extrato, 3 - saque, 4 - sair. */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Operações:\n1-Saldo\n2-Extrato\n3-Saque\n4-Sair\n");
	printf("Digite a opção de acordo com as opções acima: ");
	scanf("%d",&num);
	switch(num){
		case 1: printf("Saldo");
		break;
		case 2: printf("Extrato");
		break;
		case 3: printf("Saque");
		break;
		case 4: printf("Sair");
		break;
		default: printf("Opção inválida");		
	}
	getch();
	return 0;
}


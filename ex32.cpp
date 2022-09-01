# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int ano1, ano2, perfil;
	printf("Digite os 2 primeiros numeros do seu ano de nascimento: ");
	scanf("%d",&ano1);
	printf("Digite os 2 ultimos numeros do seu ano de nascimento: ");
	scanf("%d",&ano2);
	perfil= (ano1 + ano2)%5;
	switch(perfil){
		case 0: printf("Você é: Timido");
		break;
		case 1: printf("Você é: Paquerador");
		break;
		case 2: printf("Você é: Sonhador");
		break;
		case 3: printf("Você é: Atraente");
		break;
		case 4: printf("Você é: Irresistivel");
		break;
		default: printf("Opção inválida");		
	}
	getch();
	return 0;
}

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
		case 0: printf("Voc� �: Timido");
		break;
		case 1: printf("Voc� �: Paquerador");
		break;
		case 2: printf("Voc� �: Sonhador");
		break;
		case 3: printf("Voc� �: Atraente");
		break;
		case 4: printf("Voc� �: Irresistivel");
		break;
		default: printf("Op��o inv�lida");		
	}
	getch();
	return 0;
}

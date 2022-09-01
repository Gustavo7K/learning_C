/*24)Fazer um programa que identifique a idade para emissão da carteira de motorista. 
OBS: Se for menor de idade escrever quanto tempo falta para tirar a CNH.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade ");
	scanf("%d",&idade);
	if (idade>=18){
		printf("Você pode tirar a CNH.");
		}
		else{
			idade=18-idade;
			printf("Você não pode tirar a CNH! Falta(m) %d ano(s).",idade);
		}
	getch();
	return 0;
}


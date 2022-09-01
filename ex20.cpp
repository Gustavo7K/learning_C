/* 22) Faça um programa que calcule a média de quatro números do tipo real e imprima para o aluno 
se ele está aprovado.
 	Obs: O aluno será aprovado se a média for maior ou igual a 7. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, n4, media;
	printf("Digite a primeira nota ");
	scanf("%f",&n1);
	printf("Digite a segunda nota ");
	scanf("%f",&n2);
	printf("Digite a terceira nota ");
	scanf("%f",&n3);
	printf("Digite a quarta nota ");
	scanf("%f",&n4);
	media=(n1+n2+n3+n4)/4;
	printf("A média é %.2f",media);
	if (media>=7){
		printf("\n\nVocê está aprovado!");
	}
	else
		printf("\nVocê está reprovado!");
	getch();
	return 0;

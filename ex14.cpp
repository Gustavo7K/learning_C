# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float peso, altura, imc;
	printf("Digite o seu peso ");
	scanf("%f",&peso);
	printf("Digite a sua altura ");
	scanf("%f",&altura);
	imc=peso/pow(altura,2);
	printf("Seu IMC é %.2f",imc);
	getch();
	return 0;
}


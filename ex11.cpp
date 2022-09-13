//11. Faça um programa que leia dois valores reais e exiba o primeiro com acréscimo de 30%, e o segundo com desconto de 25%.

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, aum, desc;
	printf("Digite um número ");
	scanf("%f",&n1);
	printf("Digite um número ");
	scanf("%f",&n2);
	aum= n1*1.30;
	desc= n2-n2*0.25;
	printf("O numero %.2f com aumento de 30%% é %.2f",n1,aum);
	printf("\nO numero %.2f com desconto de 25%% é %.2f",n2,desc);
	getch();
	return 0;
}

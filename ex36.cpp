/*76) Crie um programa que leia três valores para um vetor de três posições e depois calcule a média dos valores acessando o vetor.*/
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float v[3], media, soma=0;
	int i;
	for (i=0;i<3;i++){
		//i=0 => 0<5 => V
		//i=1 => 1<5 => V
		//i=2 => 2<5 => V
		printf ("Digite um número ");
		scanf("%f",&v[i]);
		soma= soma+v[i];
	}
		{
		media=soma/3;
		printf ("A média é %.2f",media);
	}
	getch();
	return 0;
}


/* 5. Faça um programa que calcule e exiba a média de quatro números inteiros,
 a saber: 35, 42, 87, 11. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float media;
	//printf("Digite o número 35 ");
	// scanf(...
	media=(35+42+87+11)/4;
	printf("A média entre 35, 42, 87 e 11 é %.2f",media);
	getch();
	return 0;
}


/* 5. Fa�a um programa que calcule e exiba a m�dia de quatro n�meros inteiros,
 a saber: 35, 42, 87, 11. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float media;
	//printf("Digite o n�mero 35 ");
	// scanf(...
	media=(35+42+87+11)/4;
	printf("A m�dia entre 35, 42, 87 e 11 � %.2f",media);
	getch();
	return 0;
}


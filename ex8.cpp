/* 8. Faça um programa que leia três números reais e exiba o triplo da 
sua soma. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, triplo;
	printf("Digite um número ");
	scanf("%f",&n1);
	printf("Digite um número ");
	scanf("%f",&n2);
	printf("Digite um número ");
	scanf("%f",&n3);
	triplo=3*(n1+n2+n3);
	printf("O triplo da soma dos números %.2f, %.2f e %.2f é %.2f",n1, n2, n3, triplo);
	getch();
	return 0;
}


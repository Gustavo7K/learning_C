/* 8. Fa�a um programa que leia tr�s n�meros reais e exiba o triplo da 
sua soma. */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, n3, triplo;
	printf("Digite um n�mero ");
	scanf("%f",&n1);
	printf("Digite um n�mero ");
	scanf("%f",&n2);
	printf("Digite um n�mero ");
	scanf("%f",&n3);
	triplo=3*(n1+n2+n3);
	printf("O triplo da soma dos n�meros %.2f, %.2f e %.2f � %.2f",n1, n2, n3, triplo);
	getch();
	return 0;
}


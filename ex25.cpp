/* 28)  Fa�a um programa que receba tr�s inteiros e diga qual deles � o menor.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	printf("Digite o primeiro n�mero ");
	scanf("%d",&a);
	printf("Digite o segundo n�mero ");
	scanf("%d",&b);
	printf("Digite o terceiro n�mero ");
	scanf("%d",&c);
	if(a<b && a<c){
		printf("O n�mero %d � menor.",a);
	}
	else
	if(b<a&&b<c){
		printf("O n�mero %d � menor.",b);
	}
	else{
		printf("O n�mero %d � menor.",c);
	}


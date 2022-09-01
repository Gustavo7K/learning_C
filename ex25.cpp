/* 28)  Faça um programa que receba três inteiros e diga qual deles é o menor.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, c;
	printf("Digite o primeiro número ");
	scanf("%d",&a);
	printf("Digite o segundo número ");
	scanf("%d",&b);
	printf("Digite o terceiro número ");
	scanf("%d",&c);
	if(a<b && a<c){
		printf("O número %d é menor.",a);
	}
	else
	if(b<a&&b<c){
		printf("O número %d é menor.",b);
	}
	else{
		printf("O número %d é menor.",c);
	}


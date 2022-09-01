/* 32) Dado três números, verifique se o triângulo é equilátero, isósceles ou escaleno.

equilátero = 3 lados iguais
isósceles = 2 lados iguais
escaleno = 3 lados diferentes */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float l1, l2, l3;
	printf ("Digite o primeiro lado do triângulo ");
	scanf("%f",&l1);
	printf ("Digite o segundo lado do triângulo ");
	scanf("%f",&l2);
	printf ("Digite o terceiro lado do triângulo ");
	scanf("%f",&l3);
	if(l1==l2 && l1==l3 && l2==l3){
		printf("O triângulo é equilátero.");
	}
	else
	if(l1!=l2 && l1!=l3 && l2!=l3){
		printf("O triângulo é escaleno.");
	}
	else{
		printf("O triângulo é isósceles.");
	}
	getch();
	return 0;
}


/* 32) Dado tr�s n�meros, verifique se o tri�ngulo � equil�tero, is�sceles ou escaleno.

equil�tero = 3 lados iguais
is�sceles = 2 lados iguais
escaleno = 3 lados diferentes */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float l1, l2, l3;
	printf ("Digite o primeiro lado do tri�ngulo ");
	scanf("%f",&l1);
	printf ("Digite o segundo lado do tri�ngulo ");
	scanf("%f",&l2);
	printf ("Digite o terceiro lado do tri�ngulo ");
	scanf("%f",&l3);
	if(l1==l2 && l1==l3 && l2==l3){
		printf("O tri�ngulo � equil�tero.");
	}
	else
	if(l1!=l2 && l1!=l3 && l2!=l3){
		printf("O tri�ngulo � escaleno.");
	}
	else{
		printf("O tri�ngulo � is�sceles.");
	}
	getch();
	return 0;
}


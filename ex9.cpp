/*9. Faça um programa que leia o valor em reais e exiba o equivalente em
 dólares. Considere que um dólar vale R$ 3,50.  */
 
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float real, dolar;
	printf("Digite o valor em real que você quer converter em dólar R$ ");
	scanf("%f",&real);
	dolar=real/3.50;
	printf("O valor de R$ %.2f em dólares é US$ %.2f",real,dolar);
	getch();
	return 0;
}


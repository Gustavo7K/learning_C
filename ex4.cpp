/*4-Faça um programa que calcule o comprimento de uma 
circunferência.  

C=2*PI*r
c=comprimento
r=raio
Exigência: PI seja declarado como constante
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# define PI 3.14

int main(){
	setlocale(LC_ALL, "Portuguese");
	float C,r;
	printf("Digite o valor do raio ");
	scanf("%f",&r);
	C=2*PI*r;
	printf("O valor do comprimento da circunferência é %.2f",C);
	getch();
	return 0;
}


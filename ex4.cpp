/*4-Fa�a um programa que calcule o comprimento de uma 
circunfer�ncia.  

C=2*PI*r
c=comprimento
r=raio
Exig�ncia: PI seja declarado como constante
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
	printf("O valor do comprimento da circunfer�ncia � %.2f",C);
	getch();
	return 0;
}


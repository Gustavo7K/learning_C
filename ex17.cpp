/* 20. Construa um algoritmo para calcular as ra�zes de uma equa��o do 2� grau (ax2 + bx + c) 
sendo que os valores a, b e c s�o fornecidos pelo usu�rio.
delta=b^2-4*a*c
x=-b+-raizquadrada(delta)/2*a

raizquadrada = sqrt(delta) => inserir a biblioteca de matem�tica
 */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, delta, x1, x2;
	printf("Digite o valor de a ");
	scanf("%f",&a);
	printf("Digite o valor de b ");
	scanf("%f",&b);
	printf("Digite o valor de c ");
	scanf("%f",&c);
	delta=pow(b,2)-4*a*c;
	x1=(-b-sqrt(delta))/2*a;
	x2=(-b+sqrt(delta))/2*a;
	printf("As ra�zes s�o x1=%.2f e x2=%.2f",x1,x2);
	getch();
	return 0;
}


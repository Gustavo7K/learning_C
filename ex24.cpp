/*27) Fazer um programa que calcule uma equa��o do 2� grau e determine se suas ra�zes s�o reais e diferentes, reais e iguais ou n�o possui ra�zes.
**delta > 0 -> possui ra�zes reais e diferentes
**delta = 0 -> possui ra�zes reais e iguais
**delta < 0 -> n�o possui ra�zes reais
a=1; b=-5; c=6; x1=2 e x2=3
a=1; b=-4; c=4; x1=2 e x2=2
a=1; b=-2; c=2; n�o possui ra�zes reais
a=1; b=-0,6; c=0,08; x1=-0,4 e  x2=-0,2*/
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
	if(delta>0){
			printf("Possui ra�zes reais e diferentes que s�o x1=%.2f e x2=%.2f",x1,x2);
	}
	else
	if(delta == 0){
		printf("Possui ra�zes reais e iguais que s�o x1=%.2f e x2=%.2f",x1,x2);
	}
	else{
		printf("N�o possui ra�zes reais.");
	}
	getch();
	return 0;
}


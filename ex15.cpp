# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float sf, si, tf, ti, vm;
	printf("Digite a dist�ncia final ");
	scanf("%f",&sf);
	printf("Digite a dist�ncia inicial ");
	scanf("%f",&si);
	printf("Digite o tempo final ");
	scanf("%f",&tf);
	printf("Digite o tempo inicial ");
	scanf("%f",&ti);
	vm=(sf-si)/(tf-ti);
	printf("A velocidade m�dia � %.2f ",vm);
	getch();
	return 0;
}


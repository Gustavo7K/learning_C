# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float n, cubo;
	printf("Digite um n�mero ");
	scanf("%f",&n);
	cubo=pow(n,3);
	//cubo=n*n*n;
	printf("O cubo do n�mero %.2f � %.2f",n,cubo);
	getch();
	return 0;
}



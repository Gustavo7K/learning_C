# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite um n�mero ");
	scanf("%f",&a);
	printf("Digite um n�mero ");
	scanf("%f",&b);
	printf("Digite um n�mero ");
	scanf("%f",&c);
	if(a>=b && a>=c){
		printf("O %.2f � maior.",a);
	}
	else
	if(b>=a && b>=c){
		printf("O %.2f � maior.",b);
	}
	else{
		printf("O %.2f � maior.",c);
	}
	getch();
	return 0;

}

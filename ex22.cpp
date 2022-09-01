# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c;
	printf("Digite um número ");
	scanf("%f",&a);
	printf("Digite um número ");
	scanf("%f",&b);
	printf("Digite um número ");
	scanf("%f",&c);
	if(a>=b && a>=c){
		printf("O %.2f é maior.",a);
	}
	else
	if(b>=a && b>=c){
		printf("O %.2f é maior.",b);
	}
	else{
		printf("O %.2f é maior.",c);
	}
	getch();
	return 0;

}

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, resto;
	printf("Digite um numero inteiro ");
	scanf("%d",&n1);
	resto = n1%2;
	if (resto == 0){
		printf("seu numero é par");
		}
		else{
			printf("Seu numero é impar");
		}
	getch();
	return 0;
}


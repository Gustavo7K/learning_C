# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade ");
	scanf("%d",&idade);
	if (idade>=18 && idade<= 67){
		printf("Você pode tirar a sangue");
		}
		else{
			printf("Voce nao pode tirar sangue")
		}
	getch();
	return 0;
}


# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float comissao, tvendas;
	printf("Digite o total de vendas realizadas no m�s ");
	scanf("%f",&tvendas);
	comissao=tvendas*10/100;
	//comissao=0.1*tvendas;
	printf("A sua comiss�o � R$ %.2f",comissao);
	getch();
	return 0;
}


# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, dobro;
	printf("Digite o numero ");
	scanf("%f",&n1);
	dobro= n1*2;
	printf("O dobro desse numero é %.1f", dobro);
	getch();
	return 0;
}

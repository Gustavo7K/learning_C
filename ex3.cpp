# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, media;
	printf("Digite um n�mero ");
	scanf("%f",&n1);
	printf("Digite um n�mero ");
	scanf("%f",&n2);
	media=(n1+n2)/2;
	printf("A m�dia entre %.2f e %.2f � %.2f",n1,n2,media);
	getch();
	return 0;
}


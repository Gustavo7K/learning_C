# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, soma;
	printf("Digite um numero  ");
	scanf("%f",&n1);
	printf("Digite um numero  ");
	scanf("%f",&n2);
	soma=n1+n2;
	printf("A soma entre os numeros %2.f e %2.f é %2.f", n1,n2,soma);
	getch();
return 0;
}

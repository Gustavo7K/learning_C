/*7. Fa�a um programa que leia dois n�meros inteiros e exiba o resto 
da divis�o do primeiro pelo segundo.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
int n1,n2,resto;
printf("Digite um n�mero inteiro ");
scanf ("%d",&n1);
printf("Digite um n�mero inteiro ");
scanf ("%d",&n2);
resto=n1%n2;
printf("O resto da divis�o de %i por %i � %d",n1,n2,resto);
	getch();
	return 0;
}


/*75)Fa�a um programa que leia uma sequ�ncia de 5 n�meros e exiba-os em ordem inversa.*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float v[5];
	int i;
	for (i=0;i<5;i++){
		//i=0 => 0<5 => V
		//i=1 => 1<5 => V
		//i=2 => 2<5 => V
		//i=3 => 3<5 => V
		//i=4 => 4<5 => V
		//i=5 => 5<5 => F sai da estrutura de repeti��o
		printf ("Digite um n�mero ");
		scanf("%f",&v[i]);
	}
	printf ("\n\nO vetor na forma inversa de digita��o \n\n");
	for (i=4;i>=0;i--){
		//i=4 => 4>=0 => V
		printf ("%.2f\t",v[i]);
	}
	getch();
	return 0;
}


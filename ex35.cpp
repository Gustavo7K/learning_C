/*75)Faça um programa que leia uma sequência de 5 números e exiba-os em ordem inversa.*/

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
		//i=5 => 5<5 => F sai da estrutura de repetição
		printf ("Digite um número ");
		scanf("%f",&v[i]);
	}
	printf ("\n\nO vetor na forma inversa de digitação \n\n");
	for (i=4;i>=0;i--){
		//i=4 => 4>=0 => V
		printf ("%.2f\t",v[i]);
	}
	getch();
	return 0;
}


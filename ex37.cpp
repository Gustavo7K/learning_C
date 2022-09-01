/*77) Crie um programa que leia uma quantidade de valores para um vetor de tamanho de 
posições definido pelo usuário e depois calcule a média dos valores acessando o vetor.
*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, tamanho;
	printf("Digite o tamanho do seu vetor ");
	scanf("%d",&tamanho);
	float v[tamanho],soma=0, media;
	for (i=0;i<tamanho;i++){
		printf("Digite um número ");
		scanf("%f",&v[i]);
		soma=soma+v[i];
	}
	media=soma/tamanho;
	printf("A média é %.2f.",media);
	getch();
	return 0;
}


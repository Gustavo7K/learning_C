/*74) Faça um programa que leia uma sequência de 5 números e exiba-os.*/

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float v[5];
	//float n1, n2, n3, n4, n5;
	int i;
	for(i=0;i<5;i++){
		//i=0 => 0<5 => V
		//i=1 => 1<5 => V
		//i=2 => 2<5 => V
		//i=3 => 3<5 => V
		//i=4 => 4<5 => V
		//i=5 => 5<5 => F sai da estrutura de repetição
		printf ("Digite um número ");
		scanf("%f",&v[i]);
		//printf("%.2f.\t",v[i]);	
	}
	printf("\n\nO vetor é \n\n");
	for (i=0;i<5;i++){
		printf("%.2f.\t",v[i]);
		//printf("O vetor de índice %d é %.2f.\n",i+1,v[i]);
		//printf("O vetor de índice %d é %.2f.\n",i,v[i]);
	}
	getch();
	return 0;
}


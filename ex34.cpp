/*74) Fa�a um programa que leia uma sequ�ncia de 5 n�meros e exiba-os.*/

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
		//i=5 => 5<5 => F sai da estrutura de repeti��o
		printf ("Digite um n�mero ");
		scanf("%f",&v[i]);
		//printf("%.2f.\t",v[i]);	
	}
	printf("\n\nO vetor � \n\n");
	for (i=0;i<5;i++){
		printf("%.2f.\t",v[i]);
		//printf("O vetor de �ndice %d � %.2f.\n",i+1,v[i]);
		//printf("O vetor de �ndice %d � %.2f.\n",i,v[i]);
	}
	getch();
	return 0;
}


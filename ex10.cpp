/*10. Fa�a um programa que leia o sal�rio do funcion�rio e apresente o 
sal�rio com um aumento de 15%.  */

# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float sal, aum;
	//float sal
	printf("Digite o sal�rio ");
	scanf("%f",&sal);
	aum=sal*1.15;
	//aum=sal+sal*15/100
	//aum=sal+sal*0.15
	//sal=sal*1.15
	printf("O sal�rio de R$ %.2f com aumento de 15%% � R$ %.2f",sal,aum);
	getch();
	return 0;
}


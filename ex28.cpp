/*31) Numa papelaria, at� 100 folhas, a c�pia custa R$ 0,25, e acima de 100 folhas custa R$ 0,20. 
Dado o total de c�pias, informe o total a ser pago.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float total;
	int n;
	printf("Digite a quantidade de c�pias ");
	scanf("%d",&n);
	if(n<=100){
		total=n*0.25;
		printf("O valor total a ser pago por %d folhas � R$ %.2f.",n,total);
	}
	else{
		total=n*0.20;
		printf("O valor total a ser pago por %d folhas � R$ %.2f.",n,total);
	}
	getch();
	return 0;
}


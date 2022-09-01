/*31) Numa papelaria, até 100 folhas, a cópia custa R$ 0,25, e acima de 100 folhas custa R$ 0,20. 
Dado o total de cópias, informe o total a ser pago.  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float total;
	int n;
	printf("Digite a quantidade de cópias ");
	scanf("%d",&n);
	if(n<=100){
		total=n*0.25;
		printf("O valor total a ser pago por %d folhas é R$ %.2f.",n,total);
	}
	else{
		total=n*0.20;
		printf("O valor total a ser pago por %d folhas é R$ %.2f.",n,total);
	}
	getch();
	return 0;
}


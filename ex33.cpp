# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int n=0, mult;
	while (n<50){
		//0<0 V entra
		//1<0 V entra
		mult=n*5;
		//mult=0*2=0
		//mult=1*2=2
		printf("O número %d é múltiplo de 5.\n",mult);
		//printf(0)
		//printf(2)
		n++;
		//n=n+1=0+1=1 sobe
		//n=1+1=2 sobe ...
	}
	getch();
	return 0;
}


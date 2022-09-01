# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	float C, F, K;
	printf("Digite a temperatura em graus Celsius ");
	scanf("%f",&C);
	F=(9*C+160)/5;
	K = C +273;
	printf("A temperatura de %.2f°C em Fahrenheit é %.2f°F e em Kelvin é %.2f K",C,F,K);
	getch();
	return 0;
}


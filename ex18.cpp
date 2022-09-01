/*21. Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer do plano,
 P(x1,y1 ) e Q(x2,y2 ), calcule a distância entre eles.

Obs: d=raizquadrada((x2-x1 )^2+(y2-y1 )^2 )
  */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>
# include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float x1, x2, delta, y1, y2;
	printf("Digite o valor de x1  ");
	scanf("%f",&x1);
	printf("Digite o valor de x2  ");
	scanf("%f",&x2);
	printf("Digite o valor de y1  ");
	scanf("%f",&y1);
	printf("Digite o valor de y2  ");
	scanf("%f",&y2);
	delta=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("A distancia entre os dois pontos é %.2f", delta);
	getch();
	return 0;
}

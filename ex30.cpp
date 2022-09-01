/* 40) Dada uma letra (S, C, D ou V), informe o estado civil correspondente por extenso 
(solteiro, casado, Divorciado ou Viúvo).

case 'C':
case 'S':
 */
# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>


int main(){
	setlocale(LC_ALL, "Portuguese");
	char word;
	printf("Digite umas das letras S, C, D ou V:  ");
	scanf("%c",&word);
	switch(word){
		case 'S':printf("Solteiro");
		break;
		case 'C': printf("Casado");
		break;
		case 'D':printf("Divorciado");
		break;
		case 'V': printf("Viuvo");
		break;
		default: printf("Opção inválida");
	}
	getch();
	return 0;
}


# include <stdio.h>
# include <conio.h>
# include <locale.h>
# include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("Digite sua idade ");
	scanf("%d",&idade);
	if (idade <= 10){
		printf("Voc� est� na categoria Infantil.");
	}
	else if(idade <=17){
		printf("voce esta na categoria Juvenil");
	}
	else{
		idade >17;
		printf("Voc� esta na categoria Senior");
	}
	getch();
	return 0;
}


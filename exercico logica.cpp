#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>

int nota;
int opcao;
int quantidade = 0;
int soma;
float media;

int main(){
	while (true){
		printf (" Menu - digite a opcao selecionada: \n ");
		printf (" 1-digitar notas \n ");
		printf (" 2- calcular media \n ");
		printf (" 3- sair \n");
		scanf ("%d", &opcao);
		
	if (opcao ==1) {
		soma = 0;
		printf ("quantas notas vai digitar? \n");
		scanf ("%d", &quantidade);
		for (int i=0; i <quantidade; i ++){
			printf("digite uma nota:");
			scanf ("%d", &nota);
			soma = soma+nota;
		}
		media = soma / quantidade;
	}
	if (opcao ==2){
		printf ("media: %.2f \n", media);
	}
	if (opcao ==3){
		return 0;
	}		
}
}



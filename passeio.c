#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int compromisso, cidade, dinheiro, perto, chuva; 
	int sim = 1, nao = 0;
	
	printf("Sera que farei o passeio? \n\nEscreva 1 para sim e 0 para nao.\n");
	printf("Tenho compromisso no dia?\n ");
	scanf("%d", &compromisso);
	printf("Vou estar na cidade?\n ");
	scanf("%d", &cidade);
	printf("Tenho dinheiro?\n ");
	scanf("%d", &dinheiro);
	printf("E perto?\n ");
	scanf("%d", &perto);
	printf("Esta chovendo?\n ");
	scanf("%d", &chuva);
	
	if  ((compromisso == 0) &&
		(cidade == 1) &&
		(dinheiro == 1 || dinheiro == 0) &&
		(perto == 1) &&
		(chuva == 0)){
		printf("EU VOU!");
	} else {
		printf("NAO VOU!");
	}
	
	return 0;
}


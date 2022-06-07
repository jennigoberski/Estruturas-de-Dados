#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *arquivo;
	arquivo = fopen("exemplo1.txt", "w");
	/*w -> write; r -> read; a -> append*/
	
	if(arquivo != NULL) {
		fprintf(arquivo, "Olá, Mundo!");
		fclose(arquivo);
	} else {
		printf("Erro na leitura do arquivo.");
	}
	
	return 0;
}
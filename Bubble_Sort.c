//	Bubble Sort

//	Para o Pedrinho / Natã

//	Blibiotecas
#include <stdio.h>
#include <locale.h>

int main (void) {
//	Local da língua
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, caixa;	//i = posição de cada valor, j = valor de cada um na posição i, caixa =  variável_temporária
	int array [] = {5,3,4,2,8,7,1,6,10,9}; //É a mesma coisa que $array {1,2,3}; no PHP (lembra da colher e do garfo)
	int n = sizeof(array) / sizeof(array[0]); //sezeof conta a quantidade de valores, que nesse caso tem 10 e divide por 1, porque nesse caso aqui => sizeof(array[0]), ele pega apenas uma posição
	
	printf("\nAntes: ");
	
	//	Laço para representar o vetor antes da mudança
	for (i = 0; i < n; i++) {
		printf("%d", array[i]);
		if (i < n - 1) {
			printf(", ");
		}
	}
	
	//	Laço para percorrer a posição do vetor
	for (i = 0; i < n - 1; i++) {
		//	Laço para percorrer o valor de cada vetor
		for (j = 0; j < n - 1 - i; j++) {
			if (array[j] < array[j + 1]) { //	Aqui você troca o valor > 1-10 e < 10-1
				
//				Famoso Bubble sort, troca eles como naqueles jogos de aposta, onde eles trocam de lugar
				caixa = array[j];
				array[j] = array[j + 1];
				array[j + 1] = caixa;
 			} 
		}
	}
	//	Laço para representar o vetor depois da mudança
	printf("\nOrdem certa: ");
	for (i = 0; i < n; i++) {
		printf("%d", array[i]);
		if (i < n -1) {
			printf(", ");
		}
	}
	
	return 0;
}



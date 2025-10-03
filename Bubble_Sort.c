//	Bubble Sort

//	Para o Pedrinho / Nat�

//	Blibiotecas
#include <stdio.h>
#include <locale.h>

int main (void) {
//	Local da l�ngua
	setlocale(LC_ALL,"Portuguese");
	
	int i, j, caixa;	//i = posi��o de cada valor, j = valor de cada um na posi��o i, caixa =  vari�vel_tempor�ria
	int array [] = {5,3,4,2,8,7,1,6,10,9}; //� a mesma coisa que $array {1,2,3}; no PHP (lembra da colher e do garfo)
	int n = sizeof(array) / sizeof(array[0]); //sezeof conta a quantidade de valores, que nesse caso tem 10 e divide por 1, porque nesse caso aqui => sizeof(array[0]), ele pega apenas uma posi��o
	
	printf("\nAntes: ");
	
	//	La�o para representar o vetor antes da mudan�a
	for (i = 0; i < n; i++) {
		printf("%d", array[i]);
		if (i < n - 1) {
			printf(", ");
		}
	}
	
	//	La�o para percorrer a posi��o do vetor
	for (i = 0; i < n - 1; i++) {
		//	La�o para percorrer o valor de cada vetor
		for (j = 0; j < n - 1 - i; j++) {
			if (array[j] < array[j + 1]) { //	Aqui voc� troca o valor > 1-10 e < 10-1
				
//				Famoso Bubble sort, troca eles como naqueles jogos de aposta, onde eles trocam de lugar
				caixa = array[j];
				array[j] = array[j + 1];
				array[j + 1] = caixa;
 			} 
		}
	}
	//	La�o para representar o vetor depois da mudan�a
	printf("\nOrdem certa: ");
	for (i = 0; i < n; i++) {
		printf("%d", array[i]);
		if (i < n -1) {
			printf(", ");
		}
	}
	
	return 0;
}



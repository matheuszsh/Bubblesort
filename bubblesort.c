#include <stdio.h>

//O método bubblesort foi desenvolvido para a ordenação de um array ou vetor

int main(){
	//Ordenação do menor para o maior
	int array[10];
	int tArray = sizeof(array) / sizeof(array[0]);

       	int aux;

	printf("Digite 10 números:\n\n");
	for(int n = 0; n < tArray; n++ ){
		printf("Numero %d: ", n+1);
		scanf("%d", &array[n]);
	}

	printf("Ordem atual:\n");
	for(int a = 0; a < tArray; a++){
		printf("%d ", array[a]);
	}
	printf("\n\n");

	for(int x = 1; x < tArray; x++){
		for(int y = 0; y < tArray-1; y++){
			if(array[y] > array[y+1]){
				aux = array[y];
				array[y] = array[y+1];
				array[y+1] = aux;
			}
		}
	}
	
	printf("Ordem Ordenada:\n");
	for(int z = 0; z < tArray; z++){
		printf("%d ", array[z]);
	}
	printf("\n");
}

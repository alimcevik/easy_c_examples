#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define NUMBEROFELEMENTS 10

void printArray(int array []);

void generateRandomArray(int array [NUMBEROFELEMENTS]);

void bubbleSort( int array []);

int main(void){
	srand(time(NULL));
	
	int array [NUMBEROFELEMENTS] = {0};
	generateRandomArray(array);
	printArray(array);
	
	bubbleSort(array);
	printArray(array);

	return 0;	
}

void printArray(int array[]){
	for (int counter = 0; counter < NUMBEROFELEMENTS; counter++){
		printf("%-4d", array[counter]);
	}
	printf("\n");
}

void generateRandomArray(int array [NUMBEROFELEMENTS]){
	for ( int counter = 0; counter < NUMBEROFELEMENTS; counter++){
		array[counter] = 1 + (rand() % 20);
		
	}
}

void bubbleSort(int array[]){
	
	int temporary = 0;
	for (int i =1; i < NUMBEROFELEMENTS; i++){
		for (int j = 0; j < NUMBEROFELEMENTS - i; j++){
			if(array[j] < array[j+1]){
				temporary = array[j];
				array[j] = array[j+1];
				array[j+1] = temporary;
			}
			
		}
		
	}
}


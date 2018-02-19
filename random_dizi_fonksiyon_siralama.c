#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ELEMANSAYISI 10

void rastgeleDiziUret(int array [ELEMANSAYISI]);
void enKucukEnBuyukEleman(int array[]);
void dizininOrtalamasi(int array[]);

int main(void){
	srand(time(NULL));
	int array [ELEMANSAYISI] = {0};
	
	printf("Rastgele uretilmis 10 elemanli dizi:\n");
	rastgeleDiziUret(array);
	enKucukEnBuyukEleman (array);	
	dizininOrtalamasi (array);	
}

void rastgeleDiziUret(int array [ELEMANSAYISI]){
	for ( int sayac = 0; sayac < ELEMANSAYISI; sayac++){
		array[sayac] = 1 + (rand() % 10);
		printf("%-4d", array[sayac]);
	}
	printf("\n");
}

void enKucukEnBuyukEleman(int array[]) {
	int enk = array[0];int enb = array[ELEMANSAYISI];
	
	for (int sayac = 0; sayac < ELEMANSAYISI; sayac++){
		if(array[sayac] < enk){
			enk = array [sayac];
		}
		if(array[sayac] > enb){
		 	enb = array [sayac];
		}
	}
		printf("Dizinin En Kucuk Elemani: %d\n",enk);
		printf("Dizinin En Buyuk Elemani: %d\n",enb);	
}

void dizininOrtalamasi(int array[]) {
	float toplam = 0,ortalama;
	
	for(int sayac = 0;sayac < ELEMANSAYISI; sayac++) {
			toplam = toplam + array[sayac];
	}
	ortalama = toplam / ELEMANSAYISI;
	printf("Dizinin Ortalamasi: %.2f\n",ortalama);
}

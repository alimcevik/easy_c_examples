#include <stdio.h>

int faktoriyel(int sayi);

int main(void){
	int sayi;
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);	

	printf("%d! = %d", sayi, faktoriyel(sayi));		
}

int faktoriyel(int sayi){
	if ((sayi == 0) || (sayi == 1)){
		return 1;
	}
	else {
		return sayi * faktoriyel(sayi - 1);
	}
}

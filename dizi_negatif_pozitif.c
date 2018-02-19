//Pozitif ve negatif sayýlarý ayrý dizilerde yazdýran program
#include <stdio.h>

int main(){
	int n;
	printf("Sayi Adedi:\n");
	scanf("%d", &n);

	int dizi[n];
	int i,adet;
	printf("Sayilari giriniz\n");
	for(i=0;i<n;i++){
		scanf("%d", &adet);
		dizi[i]=adet;
	}
	
	int pozitif[n];
	int negatif[n];
	int c=0, d=0;

	printf("\nPozitif Sayilar: ");
	for(i=0; i<n; i++){
		if( dizi[i] > 0 ){
		pozitif[c]=dizi[i];
		printf("%d ",pozitif[c]);
		c++;
		}
	}

	printf("\nNegatif Sayilar: ");
	for (i=0; i<n; i++){
		if( dizi[i] < 0 ){
			negatif[d]=dizi[i];
			printf("%d ",negatif[d]);
			d++;
		}
	}	
	return 0;
}


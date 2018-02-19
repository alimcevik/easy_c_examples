#include <stdio.h>

int main()
{
	float yol;
	float hiz;
	float saat;
	float islem;
	
	printf("Gidilecek mesafeyi giriniz: (km) ");
	scanf("%f", &yol);
	
	printf("Hizinizi giriniz: (km/h) ");
	scanf("%f", &hiz);
		
	printf("Gitmeyi planladiginiz sureyi giriniz (saat): ");
	scanf("%f", &saat);
			
	islem = (yol / hiz); 
	
	if (islem > saat) 	
	
		printf("Zamanindan sonra varirsiniz..");
	
	else if (islem < saat)
	
		printf("Zamanindan once varirsiniz..");
	
	else if	(islem == saat)
	
		printf("tam vaktinde ulasirsiniz");
		
		
		
getch();				
return 0;
}

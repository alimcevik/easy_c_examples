#include <stdio.h>

int main()
{
	int a;
	printf("Bir sayi giriniz: ");
	scanf("%d",&a);
	
	if(a % 2==0)
		printf("Sayi cifttir.");
		
	else
		printf("Sayi tektir.");
		
	
	return 0;
	
}



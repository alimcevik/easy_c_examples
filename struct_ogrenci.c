#include <stdio.h>

struct Ogrenci{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
};

int main(){
	struct Ogrenci bilgi = {"Alim","Cevik",1881,20};	
	printf("Ad:%s\nSoyad:%s\nNumara:%d\nYas:%d",bilgi.isim,bilgi.soyisim,bilgi.numara,bilgi.yas);
	
	return 0;
}

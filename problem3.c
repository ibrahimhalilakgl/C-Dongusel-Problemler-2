#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int sayi,sayi2,i,sonuc=0;
	
	printf("Lutfen Sayiyi Giriniz: ");
	scanf("%d",&sayi);
	printf("Lutfen Boleni Giriniz: ");
	scanf("%d",&sayi2);
	
	if(sayi%sayi2==0)
	{
		for(i=0;sayi>0;i++)
		{
			sayi-=sayi2;
			sonuc++;
		}
	
		printf("Bolme Isleminin Sonucu: %d",sonuc);	
	}
	else
	{
		printf("Sayi Tam Bolunmuyor.");
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, sayi; // Değişkenler tanımlanıyor: 'i' döngü için, 'sayi' kullanıcının girdiği sayı

	printf("Lutfen Sayiyi Giriniz: "); // Kullanıcıdan bir sayı girmesini istiyoruz
	scanf("%d", &sayi); // Girilen sayıyı 'sayi' değişkenine atıyoruz

	printf("Girilen Sayinin Tam Bolenleri: "); // Sonuç başlığını ekrana yazdırıyoruz
	for(i = 1; i <= sayi; i++) // 'i' değişkeni ile 1'den 'sayi'ya kadar döngü oluşturuyoruz
	{
		if(sayi % i == 0) // Sayının tam bölenlerini bulmak için kontrol ediyoruz
		{
			printf("%d ", i); // Eğer tam bölense, ekrana yazdırıyoruz
		}
	}
	
	return 0; // Programı başarıyla sonlandırıyoruz
}

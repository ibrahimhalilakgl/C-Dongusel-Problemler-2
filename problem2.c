#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, a, b, sonuc = 1; // 'i' döngü için, 'a' taban, 'b' üs ve 'sonuc' sonucu saklamak için tanımlanıyor

	printf("Lutfen A Sayisini Giriniz: "); // Kullanıcıdan bir sayı (taban) girmesini istiyoruz
	scanf("%d", &a); // Girilen sayıyı 'a' değişkenine atıyoruz

	printf("Lutfen B Sayisini Giriniz: "); // Kullanıcıdan bir sayı (üs) girmesini istiyoruz
	scanf("%d", &b); // Girilen sayıyı 'b' değişkenine atıyoruz

	for(i = 0; i < b; i++) // 'b' kez döngü yaparak 'a' sayısını çarpmaya başlıyoruz
	{
		sonuc *= a; // 'sonuc' değişkenine her seferinde 'a' sayısını çarpıyoruz
	}
	
	printf("Sonuc: %d", sonuc); // Üs alma işleminin sonucunu ekrana yazdırıyoruz
	
	return 0; // Programı başarıyla sonlandırıyoruz
}

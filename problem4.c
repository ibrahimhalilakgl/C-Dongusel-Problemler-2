#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi;
	
	printf("Lutfen Sayiyi Giriniz: ");
	scanf("%d", &sayi); // Kullanıcıdan sayıyı alıyoruz
	
	printf("Basamak Degerleri: \n");
	for(; sayi != 0; ) // Sayı 0 olmadığı sürece döngü devam eder
	{
		printf("%d \n", sayi % 10); // Sayının son basamağını ekrana yazdırıyoruz
		sayi /= 10; // Sayıyı 10'a bölerek bir basamak azaltıyoruz
	}
	
    return 0; // Programı başarıyla sonlandırıyoruz
}

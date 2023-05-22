#include <iostream>
#include <string>
using namespace std;

// C++'ta fonksion içerisinde fonksiyon oluşturulamaz.
// Fonksiyon içerisinde fonksiyon çağırılmasında bir sorun oluşturmaz.
// Fonksiyonlar main fonksiyonu dışında yazılır, main fonksiyonu içerisinde yazdırılır.

#pragma region Void Functions

// Void fonksiyonlarda döndürülmesi gereken bir şey yoktur. Yani return kod bloğuna ihtiyacımız yoktur.
// karsilama(parametre) parametreleri fonksiyon içerisinden de alabileceği gibi parantezdende alabilir.

void karsilama(int tekrar)
{
	std::string deneme = "selam";

	int sayi = 3;
	std::cout << sayi * tekrar;
}

#pragma endregion

#pragma region int functions

int topla(int sayi3,int sayi4) 
{
	return sayi3 + sayi4;    // return ile - void olmayan fonksiyonlarda - işlem yapılabilir.

	/*int method2() 
	{
	   Fonksiyon içinde fonksiyon oluşturduğumuz için hata verdi.
	}*/
}

#pragma endregion

#pragma region Declaration And Definiation

// Bildirme ve tanımlama olarak çevirisi yapılabilir.
// Headerlerde genellikle kullanılır. Main fonksiyonundan önce tanım yapılmadığında hata alınmaması için kullanılır.
// Aşağıdaki kod bildirme (declaration) işlevi görür. Derleme esnasında hata vermesini önler. 

int carp(int sayi1,int sayi2); 
#pragma endregion

#pragma region Funciton Overload
// aynı isimde ve parametrelere saahip iki fonksiyonun oluşturulması durumudur.
// Bu durumda derleyici fonksiyonlar arasından en uygun olanını seçerek fonksiyonu çalıştırır.
// Eğer uygun fonksiyon bulamazsa hata verecektir.


#pragma endregion

#pragma region Inline Functions

// Inline Functions

// İnline fonksiyonlar performans açısından verimli olması nedeniyle kullanılır.
// İnline komutunu eklememiz ile birlikte bize fonksiyonu çağırmadan sadece fonksiyonun içindeki komutu kopyalar.

inline int topla(int a, int b)
{
	return a + b;
}

#pragma endregion

#pragma region CallBack Functions

//       Fonksiyon CallBack



int topla(int a, int b) {

	return a + b;
}

// Önce çağırılacak fonksiyonun türü yazılır ardından parametrenin değişken türü girilir.

// 2.yöntem using abc = int(*)(int); bu şekilde tanımlanıyor Genelde bu yöntem kullanılır.

int getir(int (*abc)(int, int))  // Bu satırda kullanılan 1. yöntem oalrak sayılabilir.
{

	int c = abc(10, 15);  // Burada istersek kendimizde belirtebiliriz.
}

#pragma endregion



int main() 
{
	/*karsilama(3);
	std::cout << " Hello World ";*/

	// std::cout << topla(10, 11);  // Void olmayan fonksiyonlar bu şekilde çağırılır.

	std::cout << carp(5, 6);
	std::cout << topla(15, 25);

	int d = getir(topla);
	std::cout << d;

}

// Aşağıdaki kod tanımlama (definiation) işlevi görür. Derleme işleminde kodun tanımını burada olduğunu belirtir.
int carp(int sayi1, int sayi2) 
{
	return sayi1 * sayi2;
}
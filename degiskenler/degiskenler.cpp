#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::cout << "Degisken Tanimlama Yontemleri\n";
    
#pragma region Int Type
    /*int sayi1;
   int sayi2, sayi3, sonuc;
   int sayi = 5;
   sayi1 = 6;
   int a(5);
   int b{ 3 };  Süslü parantez kullanımı veri girerken farklı türlerden veri girişine engel olur.

    // Yukarıdaki gibi değişkenler bu 5 farklı yöntemle de tanımlanabilir.
   sonuc = sayi + sayi1;

   std::cout << sonuc;*/
#pragma endregion

#pragma region string

    // string değişkenleri kullanmak için iki koşuldan birini yapmalıyız:
    // 1. Koşul : using namespace std; ifadesini kullanarak doğrudan string tanımlama yaparız.
    // 1. koşulu kullanmayı tercih etmiyorum başka alan adları ile çakışıyor olabilir.
    // 2. koşul ise #include string ile string kütüphanesini import ederek std::string yazarak tanımlama yapmalıyız.

    string deneme0 ="Say Hello and smile";  // 1. koşul ile kullanılır.
    std::string deneme1 = "i am not fine";  // 2. koşul ile kullanılır.
    
#pragma endregion


#pragma region Char Type
   /* std::cout << "char veri tipi : Tek deger tutar;\n ornekler:";

    char a = '\nc';
    std::cout << a;

    // Aşağıdaki char tipli değişkende muhammeti saklamak için her harfi tek tek sakladı.
    char b[] = "muhammet";
    std::cout << b;*/

#pragma endregion

#pragma region Signed Unsigned
    
    signed int u = -1;  // signed veri tipi önünde işareti olan değişkenler için kullanılır.
    unsigned int j = 1; // undigned veri tipi işareti olmayan değişkenler için kullanılır.
    
    // Önemli Not : signed ve unsigned karşılaştırırken işaretli sayıya dönüştürür ve bu nedenle karışlaştırma
    //      hata ile sonuçlanabilir.

#pragma region Tam sayi tasmasi

    /*unsigned short x{65535};  // Bu değişkenin alacağı max değer budur.
    std::cout << "x degeri: " << x << "\n";

    x = 65536;
    std::cout << "x yeni degeri: " << x << "\n";

    x = 65537;
    std::cout << "x son degeri: " << x << "\n";*/

    // Alınan çıktılarda 0 ve 1 olma sebebi x değişkenine saklayabileceği değerden daha çok bir değer yüklemesidir.
    // Bunu program 65536 sayısını 65535'e bölerek KALANI yeni değer olarak atıyor.
    // Bu nedenle 0 ve 1 sonuçlarını elde ettik.

#pragma endregion

#pragma region Unsigned Info
     // iki unsigned sayının çıkarılmasının sonucu negatif olursa bunu program unsigned olarak tutmaya çalışacaktır ve bu
    //      nedenle sonuc beklediğimizden daha farklı olacaktır.
    /*unsigned int a = 5;
    unsigned int y = 3;
    std::cout << y - a << "\n";*/

    // yukarıda belirttiğim sorunun olmaması için işlem sonucunu signed değişkenine atadım.
    // sonuc değişkeni pozitif değer alabilir herhangi bir sorun vermez.
    /*signed int sonuc = y - a;
    std::cout << sonuc;*/
#pragma endregion

#pragma endregion

#pragma region Tur donusumleri
    
#pragma region kapali tur donusumleri

   /* int a = 10;
    a = 1.5;
    std::cout << a;*/ //Bu durumda değişkende bir veri kaybı oluşacaktır.
    //Ondalıklı kısmı göz ardı ederek sadece tam sayı kısmını alacak.
    // Ayrıca tür dönüşümü ile ilgili bir uyarı mesajı da alınır.


#pragma endregion

#pragma region Acik tur donusumleri

    int a = 5;
    a = static_cast<int>(7.8);   // Bu yöntem ise static_cast<donusturulmek_istenen_tur> şeklinde kullanılır.
    std::cout << a;  // çıktısı 7.

#pragma endregion


#pragma endregion

#pragma region Other informations
    // std::cout << sizeof(int);  // Bu yöntem ile değişken türünün byte değerini öğrenebiliriz.

   //auto a = "merhaba";     // Bu yöntem ile tür belirlemeden değişken ataması yapabiliriz. Fakat bu derleyiciye yük olur.
   //std::cout << a;   


   //const int x{ 5 };       // const ifadesi ile tanımlandıktan sonra asla değiştirilemez olarak kaydedilir.
   // x = 15;                // Tekrar düzenlemek istediğimizde bize hata verecektir.

    int sayi = 10;
    std::cout << &sayi;      // Bu yöntem ile birlikte değşkeninin bellekte tutulduğu adresi öğreniriz.
    
    // pointer
    int* sayipPtr = &sayi;   // int* methodu ile de pointerleri değşkene atabiliriz.
    std::cout << sayipPtr;   // sayi değişkeninin tutulduğu bellek adresini öğreniriz.
    std::cout << *sayipPtr;  // sayi değişkeninin değerini öğreniriz


#pragma endregion
}
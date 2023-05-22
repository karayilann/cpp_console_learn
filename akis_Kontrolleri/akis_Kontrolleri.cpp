
#pragma region If-else
// Akış kontrolleri ( if-else, switch, Goto, break, continue, while, for,exceptions )

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char islem = '+';

    std::cout << "Birinci Sayıyı Giriniz : ";       // << std::endl; komutu ile alt satıra inebiliriz.
    std::cin >> a;                                  // Bu şekilde kullanıcıdan veri girişi alabiliriz.

    std::cout << "İkinci Sayıyı Giriniz : ";        // << std::endl; komutu ile alt satıra inebiliriz.
    std::cin >> b;

    std::cout << "İşlem seçiniz : ";
    std::cin >> islem;

    if (islem == '+') {
        std::cout << "Sonuç : " << a + b;
    }
    else {
        std::cout << "İşlem Bulunamadı.";
    }
}
#pragma endregion


#pragma region If-else2


#include <iostream>

using namespace std;

int main()
{
    int a;
    std::cout << " Bir sayı giriniz : ";
    std::cin >> a;

    if (a > 50)
    {
        std::cout << "İf bloğu çalıştı.";
    }
    else if (a < 30 && a > 20)
    {
        std::cout << "Else if bloğu çalıştı.";
    }
    else
    {
        std::cout << "Else bloğu çalıştı";
    }

}


#pragma endregion

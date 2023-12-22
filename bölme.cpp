#include <iostream>
using namespace std;

int toplama(int sayi1, int sayi2)
{
    if(sayi2 == 0)
    {
        return -1; // bölen sıfır olamaz. Hata verilmesi için -1 döndürülür.
    }

    // Büyüğünü alan ve kalanı geriye döndüren ifade.
    int bok = sayi1 > sayi2 ? sayi1 / sayi2 : sayi2 / sayi1;
    int kalan = sayi1 > sayi2 ? sayi1 % sayi2 : sayi2 % sayi1;

    return kalan;
}

int main()
{
    cout << "Birinci sayıyı girin: ";
    int sayi1;
    cin >> sayi1;

    cout << "İkinci sayıyı girin: ";
    int sayi2;
    cin >> sayi2;

    int kalan = toplama(sayi1, sayi2);

    if(kalan == -1)
    {
        cout << "Hata: Bölen sıfır olamaz." << endl;
    }
    else
    {
        cout << "Kalan: " << kalan << endl;
    }

    return 0;
}
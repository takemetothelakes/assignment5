#include <iostream>
using namespace std;

int DiziElemanlarıTopla(int notlar[], int boyut)
{
    int toplam = 0;

    for(int i = 0; i < boyut; i++)
    {
        if(notlar[i] > 0)
        {
            toplam += notlar[i];
        }
    }

    return toplam;
}

int main()
{
    int notlar[] = {90, 85, 0, 0, 88};
    int boyut = sizeof(notlar) / sizeof(notlar[0]);

    int toplamNot = DiziElemanlarıTopla(notlar, boyut);

    cout << "Matematik notlarını toplamı: " << toplamNot << endl;

    return 0;
}
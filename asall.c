#include <iostream>
using namespace std;

void AsalKontrol(int sayi)
{
    if (sayi <= 1)
    {
        cout << sayi << " asal bir sayi deildir." << endl;
        return;
    }

    for (int i = 2; i * i <= sayi; i++)
    {
        if (sayi % i == 0)
        {
            cout << sayi << " asal bir sayi deildir." << endl;
            return;
        }
    }

    cout << sayi << " asal bir sayidir." << endl;
}


int main() {
    int sayi;

    cout << "Lutfen sayi giriniz: ";
    cin >> sayi;

    AsalKontrol(sayi);

    return 0;
}
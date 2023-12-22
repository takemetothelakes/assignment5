#include <iostream>
using namespace std;

bool AsalMi(int sayi)
{
    if (sayi <= 1)
        return false;

    for (int i = 2; i * i <= sayi; i++)
    {
        if (sayi % i == 0)
            return false;
    }

    return true;
}


int main() {
    int sayi;

    cout << "Lutfen sayi giriniz: ";
    cin >> sayi;

    if (AsalMi(sayi))
        cout << sayi << " asal bir sayidir." << endl;
    else
        cout << sayi << " asal bir sayi deildir." << endl;

    return 0;
}
#include <iostream>
#include <cmath>

class BahceUstasi {
    public:
        BahceUstasi(int yaricap1, int yaricap2) {
            this->yaricap1 = yaricap1;
            this->yaricap2 = yaricap2;
        }

        double HesaplaHavuzAlan(int yaricap) {
            return 3.14159 * yaricap * yaricap;
        }

        int HesaplaHavuzCevre(int yaricap) {
            return 2 * 3.14159 * yaricap;
        }

        int getYaricap1() {
            return yaricap1;
        }

        int getYaricap2() {
            return yaricap2;
        }

    private:
        int yaricap1;
        int yaricap2;
};

int main()
{
    int yaricap1, yaricap2;

    cout << "Lutfen ilk havuzun yaricapini giriniz: ";
    cin >> yaricap1;

    cout << "Lutfen ikinci havuzun yaricapini giriniz: ";
    cin >> yaricap2;

    BahceUstasi bahceustasi(yaricap1, yaricap2);

    cout << "Ilk havuzun alani: " << bahceustasi.HesaplaHavuzAlan(bahceustasi.getYaricap1()) << endl;
    cout << "Ilk havuzun cevresi: " << bahceustasi.HesaplaHavuzCevre(bahceustasi.getYaricap1()) << endl;

    cout << "Ikinci havuzun alani: " << bahceustasi.HesaplaHavuzAlan(bahceustasi.getYaricap2()) << endl;
    cout << "Ikinci havuzun cevresi: " << bahceustasi.HesaplaHavuzCevre(bahceustasi.getYaricap2()) << endl;

    return 0;
}
#include <iostream>
using namespace std;

class PeyzajUstasi {
    public:
        PeyzajUstasi(int kareKenari);
        int HesaplaBahceAlan();
        int HesaplaBahceCevre();
    private:
        int kareKenari;
};

PeyzajUstasi::PeyzajUstasi(int kareKenari) {
    this->kareKenari = kareKenari;
}

int PeyzajUstasi::HesaplaBahceAlan() {
    return kareKenari * kareKenari;
}

int PeyzajUstasi::HesaplaBahceCevre() {
    return 4 * kareKenari;
}

int main()
{
    PeyzajUstasi peyzajustasi1(10);
    PeyzajUstasi peyzajustasi2(20);

    cout << "Peyzajustasi1 bahce alanı: " << peyzajustasi1.HesaplaBahceAlan() << endl;
    cout << "Peyzajustasi1 bahce çevresi: " << peyzajustasi1.HesaplaBahceCevre() << endl;

    cout << "Peyzajustasi2 bahce alanı: " << peyzajustasi2.HesaplaBahceAlan() << endl;
    cout << "Peyzajustasi2 bahce çevresi: " << peyzajustasi2.HesaplaBahceCevre() << endl;

    return 0;
}
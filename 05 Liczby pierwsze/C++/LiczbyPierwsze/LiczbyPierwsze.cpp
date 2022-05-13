#include <iostream>
using namespace std;
int liczba;

bool czy_liczba_pierwsza(int liczba) {
    if (liczba < 2)
        return false;
    for (int i = 2; i * i <= liczba; i++) {
        if (liczba % i == 0)
            return false;
    }
    return true;
}

int main()
{
    while (true) {
        cout << "Twoja liczba: ";
        cin >> liczba;
        cout << "Czy liczba pierwsza? - ";
        if (czy_liczba_pierwsza(liczba))
            cout << "TAK"<<endl<<endl;
        else cout << "NIE"<<endl<<endl;
    }
}

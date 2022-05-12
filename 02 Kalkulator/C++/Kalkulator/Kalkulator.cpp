#include <iostream>
using namespace std;
float liczba1, liczba2;
int wybor;

int main()
{
    cout << "Podaj 1 liczbe: ";
    cin >> liczba1;
    cout << "Podaj 2 liczbe: ";
    cin >> liczba2;

    cout << "\nMENU" << endl;
    cout << "---------" << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "3. Dzielenie" << endl;
    cout << "\nWybierz funkcje: ";
    cin >> wybor;

    switch (wybor) {
    case 1:
        cout << "\nWynik: " << (liczba1 + liczba2);
        break;
    case 2:
        cout << "\nWynik: " << (liczba1 - liczba2);
        break;
    case 3:
        cout << "\nWynik: " << (liczba1 * liczba2);
        break;
    case 4:
        if (liczba2 == 0)
            cout << "\nNie dzielimy przez 0!";
        else cout << "\nWynik: " << (liczba1 / liczba2);
        break;
    default:
        cout << "\nNiewlasciwe dzialanie";
        break;
    }
}

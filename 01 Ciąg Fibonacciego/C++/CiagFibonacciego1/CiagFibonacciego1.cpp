#include <iostream>
using namespace std;
int liczba_wyrazow;
int ciag[100000];

int main()
{
    cout << "Liczba wyrazow ciagu Fibonacciego: ";
    cin >> liczba_wyrazow;

    ciag[0] = 1;
    ciag[1] = 1;

    for (int i = 2; i < liczba_wyrazow; i++) {
        ciag[i] = ciag[i - 2] + ciag[i - 1];
    }

    for (int i = 0; i < liczba_wyrazow; i++) {
        cout << ciag[i] << endl;
    }
}

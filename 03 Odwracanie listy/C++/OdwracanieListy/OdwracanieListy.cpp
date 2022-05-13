#include <iostream>
#include <list>
#include <string>
#include <conio.h>
using namespace std;
int n;
int lista[100];
list<int> listaLiczb;
string liczba;
bool stop = false;

int main()
{
    /*cout << "Ile liczb na liscie: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "Podaj " << i + 1 << " liczbe: ";
        cin >> lista[i];
    }
    cout << endl;
    for (int i = n-1; i >= 0; i--) {
        if (i>0)
            cout << lista[i] << ", ";
        else cout << lista[i];
    }
    */

    cout << "Podaj liczby: " << endl;

    while (!stop) {       
        //cin >> liczba;
        getline(cin, liczba);
        if (!liczba.empty())
            listaLiczb.push_front(stoi(liczba));
        else stop = true;
        
    }

    auto it = listaLiczb.begin(); //wskaünik it na poczπtek listy

    while (it != listaLiczb.end()) {
        cout << *it << " ";
        it++; //iteracja wskaznika na kolejne elementy listy
    }
}
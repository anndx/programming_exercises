#include <iostream>
#include <string>
using namespace std;
string tekst;

int main()
{
    cout << "Wprowadz jakis test: ";
    getline(cin, tekst);

    cout << "Odwrocony tekst: ";
    for (int i = tekst.length() - 1; i >= 0; i--) {
        cout << tekst[i];
    }
}

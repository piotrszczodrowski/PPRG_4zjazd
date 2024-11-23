#include<iostream>

using namespace std;

int main() {
  int ilosc(0);
  do {
    cout << "Podaj ilość liczb całkowitych: ";
    cin >> ilosc;
    } while (ilosc <= 0);
  cout << "Wprowadz zbior " << ilosc << " liczb calkowitych: \n";
  int liczby[ilosc];
  for (int i = 0; i < ilosc; i++) {
    cin >> liczby[i];
  }
  int* maksimum = &liczby[0];
  for (int i = 1; i < ilosc; i++) {
    if (liczby[i] > *maksimum) maksimum = &liczby[i];
  }
  cout << "Najwieksza liczba: " << *maksimum << endl;
  return 0;
  }

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
    int wystapienia[ilosc][2];
    for (int i = 0; i < ilosc; i++) {
      wystapienia[i][0] = 'null';
      wystapienia[i][1] = 0;
      }
    int licznik = 0;
    for (int i = 0; i < ilosc; i++) {
      for (int j = 0; j < ilosc; j++) {
        if (liczby[i] == wystapienia[j][0]) {
          wystapienia[j][1]++;
          break;
          }
        if (wystapienia[j][0] == 'null') {
                                       wystapienia[j][0] = liczby[i];
                                       wystapienia[j][1]++;
                                       break;}

        }
        }
//        for (int i = 0; i < ilosc; i++) {
//          cout << wystapienia[i][0] << " ";
//        }
//        cout << endl;
//        for (int i = 0; i < ilosc; i++) {
//          cout << wystapienia[i][1] << " ";
//        }
        int maksimum(0);
        for (int i = 0; i < ilosc; i++) {
          if (wystapienia[i][1] > maksimum) {
            maksimum = wystapienia[i][1];
          }
        }
        cout << "\n" << "Najczesciej wystepujace elementy:\n";
        for (int i = 0; i < ilosc; i++) {
          if (wystapienia[i][1] == maksimum) {
            cout << wystapienia[i][0] << " (" << wystapienia[i][1] << " razy)\n";
          }
        }
    return 0;
    }
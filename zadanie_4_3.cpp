#include <iostream>

using namespace std;

int main() {
  int tablica[10][10];
  for (int i = 0; i < 10; i++) {
    tablica[i][0] = i;
    }
  for (int i = 0; i < 10; i++) {
    tablica[i][1] = 2 * i;
  }
  for (int i = 0; i < 10; i++) {
    tablica[i][2] = i * i;
  }
  for (int i = 0; i < 10; i++) {
    tablica[i][3] = i + 3;
  }
  for (int i = 0; i < 10; i++) {
    tablica[i][4] = i - 4;
  }
  for (int j = 5; j < 10; j++) {
    for (int i = 0; i < 10; i++) {
      tablica[i][j] = 0;
    }
  }
  for (int j = 0; j < 10; j++) {
    for (int i = 0; i < 10; i++) {
      cout << tablica[j][i] << " ";
    }
    cout << endl;
  }
  return 0;
}
#include <iostream>8
#define harga 4500.02
using namespace std;

int main () {
  float jumlah, total;
  cout << "Masukan jumlah barang = ";
  cin >> jumlah; total = harga*jumlah;
  cout << "Yang harus di bayar = " <<total<<endl;

  return 0;
}
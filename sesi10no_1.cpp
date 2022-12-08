#include <iostream>
using namespace std;

int pangkat (int x, int y){
  if (y == 0 || y == 1){
    return x;
    }else{
    return x*pangkat (x,y-1);
  }
}

int main (){
  int x, y;
  cout << "MENGHITUNG PANGKAT DENGAN REKURSIF " <<endl;
  cout << "\n";
  cout << "Masukan Nilai X = ";
  cin >> x;
  cout << "Masukan Nilai Y = ";
  cin >> y;

  int hasil = pangkat(x,y);
  cout << "\n";
  cout << "Hasil "<<x<< " dipangkatkan "<<y<<" = "<<hasil;

  return 0;
}
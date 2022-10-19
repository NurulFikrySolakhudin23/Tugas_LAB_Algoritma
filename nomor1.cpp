#include <iostream>
using namespace std;

int main(){
  int a, b;
  char lagi;
  atas:
  cout <<"Nilai bilangan modulus 2 adalah = "<<b;
  cout <<"\n\nIngin hitung lagi [Y/T] : ";
  cin >> lagi;

  if(lagi == 'Y'|| lagi == 'y')
    goto atas;
  return 0;
}
#include <iostream>
using namespace std;

int main(){
  int a,b,segitiga;
  cout <<"~~~ Program C++ Segitiga Bintang ~~~ "<<endl;
  cout <<"==================================== "<<endl;
  cout << "\n";
  
  cout << "Input tinggi segitiga : ";
  cin >> segitiga;
  cout << "\n";
  
  for(a = 1; a <= segitiga; a++){
    for(b = 1; b <= a; b++){
      cout <<" * ";
    }
    cout <<endl;
  }
  return 0;
}
#include <iostream>
#include <string.h>

using namespace std;
int main(){
  char huruf[80];
  int x;
  
  cout <<"Masukan Kata : FAKULTAS PARIWISATA DAN INFORMATIKA ";
  cout <<" "<<endl;
  cin.getline(huruf,'x');
  cout <<"Panjang Kata = ";
  cout << strlen(huruf);
  getchar();
}
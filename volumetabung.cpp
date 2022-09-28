#include <iostream>
using namespace std;

int main()
{
  float volume, phi=3.14;
  int r, t;
  cout<<"Masukan jari-jari : ";
  cin>>r;
  cout<<"Masukan tinggi : ";
  cin>>t;

  volume=(phi*t*(r*r));

  cout <<"Volume tabung : "<<volume<<endl;

  getchar();
}
#include <iostream>
using namespace std;
int main(){
  int p, *z;

  p = 200;

  z=&p;
  cout << *z << " ";
  (*z)++;
  cout << *z << " ";
  (*z)--;
  cout << *z << "\n";

  getchar();
}
#include <iostream>
using namespace std;

int main (){
  int a,b=0;
  for (a=2; a<=20; a+=2){
    if (a<20)
      cout << a << " + ";
    else
      cout <<a;
    b=b+a;
  }
  cout << " = "<<b;
  getchar ();
}
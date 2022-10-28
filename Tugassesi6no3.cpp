#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;
int main(){
  char a1[25]="Teknik ";
  char a2[25]="Informatika ";

  cout<<a1<<endl;
  cout<<a2<<endl;
  strcat(a1,a2);
  cout << "Hasil Penggabungannya "<<a1;

  getchar();
}

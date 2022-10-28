#include <iostream>
using namespace std;

int main(){
  int nilai[10]={23,6,89,12,45,67,9,90,54,30};
  int max,min;

  for(int x=0; x<10; x++){
    cout <<"Data dari baris ke - " <<x<<"= "<<nilai[x];
    cout << endl;
  }
  max = nilai[0];
  min = nilai[0];
  for(int y=0; y<10; y++){
    if(nilai[y] > max){
      max = nilai[y];
    }
    if(nilai[y] < min){
      min = nilai[y];
    }
  }
  cout <<"\nNilai tertinggi adalah : "<<max<<endl;
  cout <<"Nilai terendah adalah : "<<min<<endl;
}
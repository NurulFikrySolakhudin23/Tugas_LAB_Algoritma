#include <iostream>
using namespace std;

int main(){
  int x,y,z,nilai,a=0,cari=0;
  int isi[50];

  cout<<"Masukan banyak bilangan = ";
  cin>>z;
  cout<<"\n"<<endl;
  for(x=0; x<z; x++){
    cout<<"Masukan Indeks ke - "<<x<<"= ";
    cin>>isi[x];
  }
  cout<<"\n\nDeretan bilangan = ";
  for(y=0; y<x; y++){
    cout<<isi[y]<<" ";
  }
  cout<<"\n\nMasukan bilangan yang akan dicari = ";
  cin>>nilai;
  for(x=0; x<z; x++){
    if(nilai==isi[x]){
      cari = nilai;
      a=x;
    }
  }
  if(nilai==cari){
    cout<<"Bilangan "<<nilai<< " Ditemukan sebanyak "<<a<<"\nPada posisi ke = "<<a<<"\n";

    }else{
    cout<<"\nNilai yang dicari "<<nilai<<" "<<"Tidak ditemukan\n";
  }
}
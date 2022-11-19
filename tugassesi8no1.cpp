#include <iostream>
using namespace std;

int main (){
  int barisX, kolomX, barisY, kolomY, x[100][100], y[100][100];
  int jumlah[100][100], kurang[100][100], hasil[100][100], sum=0;
  float kali[100][100];
  
  cout<<"   Program C++ Perhitungan Matriks"<<endl;
  cout<<"--------------------------------------"<<endl;
  cout<<"\nInput jumlah baris matriks X: ";
  cin>>barisX;
  cout<<"Input kolom baris matriks X: ";
  cin>>kolomX;
  cout<<"\nInput jumlah baris matriks Y: ";
  cin>>barisY;
  cout<<"Input kolom baris matriks Y: ";
  cin>>kolomY;

  cout<<"\nMatriks X"<<endl;
  for (int n=0; n<barisX; n++){
    for (int m=0; m<kolomX; m++){
      cout<<"Input matriks x dari " <<n+1<< m+1<<"= ";
      cin >> x[n][m];
      }
  }
  cout<<"\nMatriks Y"<<endl;
  for (int n=0; n<barisX; n++){
    for (int m=0; m<kolomX; m++){
      cout<<"input matriks y dari " <<n+1<< m+1<<"= ";
      cin >> y[n][m];
      }
  }
  for (int n=0; n<barisX; n++){
    for (int m=0; m<kolomX; m++){
      jumlah[n][m] = x[n][m]+y[n][m];
      kurang[n][m] = x[n][m]-y[n][m];
      kali[n][m] = x[n][m]*y[n][m];
      
    }
  }

  cout<<"\nHasil PENJUMLAHAN dari kedua matriks diatas sebagai berikut: "<<endl;
    for(int n = 0; n < barisX; n++)
      for(int m = 0; m < kolomX; m++){
        cout << jumlah[n][m] <<" ";
        if(m == kolomX - 1)
          cout << endl;
      }
    cout<<"\nHasil PENGURANGAN dari kedua matriks diatas sebagai berikut: "<<endl;
    for(int n = 0; n < barisX; n++)
      for(int m = 0; m < kolomX; m++){
        cout << kurang[n][m] << " ";
        if(m == kolomX - 1)
          cout << endl;
      }
    for (int i = 0; i < barisX; i++){
      for (int j = 0; j < kolomY; j++){
         for (int k = 0; k < barisY; k++){
          sum = sum + x[i][k] * y[k][j];
        }
          hasil [i][j] = sum;
           sum  = 0;
        }
     }
    cout << endl;
    cout << "\nHasil PERKALIAN dari kedua matriks diatas sebagai berikut:" << endl << endl;
    for (int i = 0; i < barisX; i++){
       for (int j = 0; j < kolomX; j++){
        cout <<hasil[i][j] << " "; 
    }
      cout << endl;
  }
  return 0;
}
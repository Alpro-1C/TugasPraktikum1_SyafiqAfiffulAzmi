#include <iostream>

using namespace std;

void loopFunction(){
    for (int i = 0; i < 115; ++i)
        { cout << "-"; }
        }

int main (){
    //membuat variabel untuk
    int bangun;
    cout << "Bangun Datar : \n";
    cout << "1. Persegi\n" ;
    cout << "2. Persegi Panjang\n";
    cout << "3. Segitiga\n\n";
    cout << "Pilih Bangun Datar : ";
    cin >> bangun;

    switch (bangun){
    //menghitung luas persegi
    case 1:
     float s, luas; //float untuk memasukan angka desimal
     loopFunction();
     cout << "\nMenghitung Luas Persegi\n\n";
     cout << "Jumlah Panjang Sisi : ";
     cin >> s;

     //perhitungan luas persegi (sisi x sisi)
     luas=s*s;
     cout << "Luas Persegi adalah : " << luas << endl;
     //menampilkan hasil perhitungan luas persegi
     loopFunction();
    break;
    case 2:
    //menghitung luas persegi panjang
     float p, l; //float untuk memasukan angka desimal
     loopFunction();
     cout << "\nMenghitung Luas Persegi panjang\n\n";
     cout << "Jumlah Panjang : ";
     cin >> p; //input panjang
     cout << "Jumlah Lebar : ";
     cin >> l; //input lebar

     //perhitungan luas persegi panjang (panjang x lebar)
     luas= p*l;
     cout << "Luas Persegi Panjang : " << luas << endl;
     //menampilkan hasil luas persegi panjang
     loopFunction();
    break;
    case 3:
    //menghitung luas segitiga
     float a, t; //float untuk memasukan angka desimal
     loopFunction();
     cout << "\nMenghitung Luas Segitiga\n\n";
     cout << "Jumlah Alas : ";
     cin >> a;
     cout << "Jumlah Tinggi : ";
     cin >> t;

     //perhitungan luas segitiga (1/2 x alas x tinggi)
     luas=a*t/2;
     cout << "Luas Segitiga : " << luas << endl;
     //menampilkan hasil luas segitiga
     loopFunction();
    break;
    }

return 0;
}

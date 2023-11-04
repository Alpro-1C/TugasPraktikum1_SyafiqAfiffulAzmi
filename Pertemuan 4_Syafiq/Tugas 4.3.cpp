#include <iostream>
using namespace std;
  
int main() {
  int n, t1 = 0, t2 = 1, angka_selanjutnya = 0;
  
    cout << "Jumlah deret fibonacci yang mau diinput: ";
    cin >> n;
  
    for(int i = 1; i <= n; i++) {
        // Tampilin 2 angka pertamanya
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        // Dihitung buat angka ke 3 ama seterusnya
        angka_selanjutnya = t1 + t2;
        t1 = t2;
        t2 = angka_selanjutnya;

        cout << angka_selanjutnya << " ";
    }

  cout << endl;
  return 0;
}
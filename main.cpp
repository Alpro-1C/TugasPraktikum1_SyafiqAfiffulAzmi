#include <iostream>

using namespace std;

void loop() {
    for (int i = 0; i < 60; i++) {
        cout << "-" ;
    }
};

int main() {
    string nama;
    string kelas;
    string cita;
    string motivasi;

    __INT64_TYPE__ npm;

    loop();

    cout << "\n" << "Nama : ";
    getline (cin, nama);
    cout << "\n";

    cout << "NPM : ";
    cin >> npm;
    cout << "\n";

    cout << "Kelas : ";
    cin.ignore();
    getline (cin, kelas);
    cout << "\n";

    cout << "Cita-Cita : ";
    getline (cin, cita);
    cout << "\n";

    cout << "Motivasi masuk ke Informatika: ";
    getline (cin, motivasi);

    loop();
    return 0;
};

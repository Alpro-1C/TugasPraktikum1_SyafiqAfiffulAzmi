#include <iostream>

using namespace std;

int main()
{
    int firstValue = 10;
    int secondValue = 8;
    //

    cout << "PERTUKARAN DUA VARIABEL \n" << endl;
    cout << "variabel pertama : " <<firstValue<< endl;
    cout << "variabel kedua : " <<secondValue<< endl;

   firstValue = firstValue + secondValue;
   secondValue = firstValue - secondValue;
   firstValue = firstValue - secondValue;
   // Menukar kedua variabel tanpa variabel tambahan

    cout << "\nHASIL PERTUKARAN DUA VARIABEL \n" << endl;
    cout << "variabel peertama : " <<firstValue<< endl;
    cout << "variabel kedua : " <<secondValue<< endl;

    return 0;

}

// 1. int nim;
//    String nama;
//    float Umur;
//
// 2. Prosedur dan Fungsi
// int tambah(int a, int b) {
//  return a + b;
// }
//
// 3. Looping 
// Looping dengan for loop
//  for (int i = 1; i <= 10; i++) {
//    cout << "Bilangan ke-" << i << endl;
//  }
//
// 4. Conditional statement 
// if (number > 5) {
//   cout << "Angka lebih besar dari 5" << endl;
//  } else {
//   cout << "Angka kurang dari atau sama dengan 5" << endl;
//  }
//
// 5. Struct
// struct Person {
//   string nama;
//   int umur;
// };

#include <iostream>
using namespace std;

class Udara{
    public : 
        string kota1;
        string kota2;
        string status1;
        string status2;

        void input(){
            cout << "Kota Pertama\t: ";
            cin >> kota1;
            cout << "Status Pertama\t: ";
            cin >> status1;
            cout << "Kota Kedua\t: ";
            cin >> kota2;
            cout << "Status Kedua\t: ";
            cin >> status2;
        }

        void output(){
            cout << "Nama Kota - Status" << endl;
            cout << kota2 << " \t: " << status1 << endl;
            cout << kota1 << " \t: " << status2 << endl;
        }
};

int main(){
    Udara udr;

    udr.input();
    udr.output();

    system("pause");
    system("cls");

    return 0;
} 

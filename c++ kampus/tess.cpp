#include <iostream>
using namespace std;

int main() {
    int number;  // Variabel bertipe int
    int *ptr;    // Pointer ke variabel bertipe int

    cout << "Masukkan nilai variabel: ";
    cin >> number;  // Meminta pengguna memasukkan nilai untuk variabel

    ptr = &number;  // Mengisi pointer dengan alamat dari variabel number

    // Menampilkan nilai variabel dan nilai yang ditunjuk oleh pointer
    cout << "Nilai dari variabel number: " << number << endl;
    cout << "Alamat variabel number: " << &number << endl;
    cout << "Nilai yang ditunjuk oleh pointer: " << *ptr << endl;
    cout << "Alamat yang ditunjuk oleh pointer: " << ptr << endl;

    return 0;
}


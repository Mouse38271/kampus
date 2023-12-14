#include <iostream>
using namespace std;

int main() {
    string password;
    
    cout << "Selamat datang di Slot Halal\n";
    cout << "Masukkan password: ";
    
    cin >> password;
    
    if (password == "jayajaya") {
        cout << "Selamat datang, Sultan!\n";
    } else {
        cout << "Waduh, bukan Sultan, coba lagi!\n";
    }

    cout << "Terimakasih sudah mencoba mempercayakan SLOT HALAL KAMI!\n";
    
    return 0;
}

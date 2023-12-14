#include <iostream>
using namespace std;

int main() {
    cout << "Selamat datang di Slot Halal\n";
    int total_topup;

    cout << "Masukan total topup: ";
    cin >> total_topup;

    if (total_topup > 500000) {
        cout << "Selamat! Anda sudah top up: " << total_topup << " dan dapat saldo tambahan.\n";
    }
    else {
        cout << "Terimakasih Anda sudah topup: " << total_topup << ".\n";
    }

    cout << "TOP UP DI SLOT HALAL KAMI!\n";

    return 0;
}
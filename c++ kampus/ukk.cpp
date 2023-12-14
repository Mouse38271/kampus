#include <iostream>
using namespace std;

int main() {
    int jam;
    string harga;

    cout << "Paketan Warnet jayajaya\n";
    cout << "Pilih berapa jam boss? ";
    cin >> jam;

    if (jam >= 9) {
        harga = "100rb";
        cout << "Oh yang " << harga << endl;
    } else if (jam > 8) {
        harga = "90rb";
        cout << "Oh yang " << harga << endl;
    } else if (jam >= 7) {
        harga = "75rb";
        cout << "Oh yang " << harga << endl;
    } else if (jam > 6) {
        harga = "65rb";
        cout << "Oh yang " << harga << endl;
    } else if (jam >= 3) {
        harga = "45rb";
        cout << "Oh yang " << harga << endl;
    } else if (jam >= 2) {
        harga = "35rb";
        cout << "Oh yang " << harga << endl;
    } else {
        harga = "25rb";
        cout << "Oh yang " << harga << endl;
    }

    if (harga != "") {
        cout << "Terima kasih sudah bermain " << harga << endl;
    } else {
        cout << "Duh, gak ada yang cocok, bos!" << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int choice;
    char subChoice;

    do {
        cout << "Menu Paketan Warnet:\n";
        cout << "1. VIP\n";
        cout << "2. Biasa\n";
        cout << "3. Hanya nanya\n";
        cout << "Pilihan Anda:  ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Paketan VIP dipilih.\n";
                cout << "a. Warnet & Makanan (Harga 20rb)\n";
                cout << "b. Warnet (Harga 15rb)\n";
                cout << "c. Kembali ke menu\n";
                cout << "Pilih sub-pilihan (a/b/c): ";
                cin >> subChoice;

                switch (subChoice) {
                    case 'a':
                        cout << "Anda memilih paket VIP Warnet & Makanan seharga 20rb.\n";
                        break;
                    case 'b':
                        cout << "Anda memilih paket VIP Warnet seharga 15rb.\n";
                        break;
                    case 'c':
                        break;
                    default:
                        cout << "Pilihan tidak valid. Silakan pilih kembali.\n";
                }
                break;

            case 2:
                cout << "Paketan Biasa dipilih.\n";
                cout << "a. Warnet & Makanan (Harga 15rb)\n";
                cout << "b. Warnet (Harga 10rb)\n";
                cout << "c. Kembali ke menu\n";
                cout << "Pilih sub-pilihan (a/b/c): ";
                cin >> subChoice;

                switch (subChoice) {
                    case 'a':
                        cout << "Anda memilih paket Biasa Warnet & Makanan seharga 15rb.\n";
                        break;
                    case 'b':
                        cout << "Anda memilih paket Biasa Warnet seharga 10rb.\n";
                        break;
                    case 'c':
                        break;
                    default:
                        cout << "Pilihan tidak valid. Silakan pilih kembali.\n";
                }
                break;

            case 3:
                cout << "Anda memilih Hanya nanya. Apa yang ingin Anda tanyakan?\n";
                break;

            default:
                cout << "Pilihan tidak valid. Silakan pilih kembali.\n";
        }

    } while (choice != 3);

    return 0;
}


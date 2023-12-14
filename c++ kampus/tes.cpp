#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "Menu Pilihan:\n";
        cout << "1. Pesan makanan\n";
        cout << "2. Beli tiket warnet\n";
        cout << "3. Beli kue\n";
        cout << "4. Keluar\n";
        cout << "\nPilih menu (1/2/3/4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Anda memilih menu Pesan makanan.\n";
                break;

            case 2:
                cout << "Anda memilih menu Beli tiket warnet.\n";
                break;

            case 3:
                cout << "Anda memilih menu Beli kue.\n";
                break;

            case 4:
                cout << "Terima kasih. Program selesai.\n";
                return 0;

            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi.\n";
        }

        char kembali;
        cout << "\nKembali ke menu? (y/n):\n ";
        cin >> kembali;
    } while (choice != 4);

    return 0;
}


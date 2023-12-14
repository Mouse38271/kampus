#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "## Anime Yang Ingin di Pesan ##\n";
        cout << "================================\n";
        cout << "1. Black Clover\n";
        cout << "2. One Punch Man\n";
        cout << "3. One Piece\n";
        cout << "4. Jujutsu Kaisen\n";
        cout << "5. Bingung\n";
        cout << "\nPilihan Anda: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Selamat Menonton Black Clover\n";
                break;

            case 2:
                cout << "Selamat Menonton One Punch Man\n";
                break;

            case 3:
                cout << "Selamat Menonton One Piece\n";
                break;

            case 4:
                cout << "Selamat Menonton Jujutsu Kaisen.\n";
                break;
                
            case 5:
                cout << "Kalau Bingung ngapain pesen\n";
            	return 0;

            default:
                cout << "Pilihan tidak valid. Silakan pilih lagi.\n";
        }

        char kembali;
        cout << "\nKembali ke menu? (y/n): ";
        cin >> kembali;
        
        
        if (kembali == 'n') {
            cout << "Terima Kasih Sudah Memilih\n";
            return 0;
        }
    } while (choice != 5);

    return 0;
}
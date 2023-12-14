#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char kembali;
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

        do {
            cout << "\nKembali ke menu? (y/n): ";
            cin >> kembali;
            kembali = tolower(kembali); // Mengubah input menjadi huruf kecil

            if (kembali == 'n') {
                cout << "Terima Kasih Sudah Memilih\n";
                return 0;
            } else if (kembali == 'y') {
                break; // Keluar dari loop jika input adalah 'y'
            } else {
                cout << "Masukan tidak valid. Silakan masukkan 'y' atau 'n'.\n";
            }
        } while (true);
    } while (choice != 5);

    return 0;
}
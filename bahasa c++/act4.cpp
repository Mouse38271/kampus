//Abdul Hakim_50422058

#include <iostream>
#include <stack>
#include <string>
using namespace std;

class MyStack {
private:
    stack<string> menu;
    int max_size; // Ukuran maksimum stack

public:
    MyStack(int size) : max_size(size) {} // Konstruktor untuk menetapkan ukuran maksimum

    // Menambahkan aktivitas ke dalam stack
    void push(string activity) {
        if (menu.size() < max_size) {
            menu.push(activity);
            cout << "Aktivitas berhasil ditambahkan.\n";
        } else {
            cout << "Stack penuh. Tidak dapat menambahkan aktivitas.\n";
        }
    }

    // Menghapus aktivitas teratas dari stack
    void pop() {
        if (!menu.empty()) {
            cout << "Aktivitas " << menu.top() << " dihapus.\n";
            menu.pop();
        } else {
            cout << "Menu sudah kosong.\n";
        }
    }

    // Mengosongkan seluruh stack
    void clear() {
        while (!menu.empty()) {
            menu.pop();
        }
        cout << "Menu berhasil dikosongkan.\n";
    }

    // Memeriksa apakah stack kosong
    bool isEmpty() {
        return menu.empty();
    }

    // Memeriksa apakah stack sudah penuh
    bool isFull() {
        return (menu.size() == max_size);
    }

    // Menampilkan semua aktivitas yang ada di dalam stack
    void displayMenu() {
        if (menu.empty()) {
            cout << "Menu kosong.\n";
        } else {
            cout << "Aktivitas pada Menu: \n";
            stack<string> temp = menu;
            while (!temp.empty()) {
                cout << temp.top() << endl;
                temp.pop();
            }
        }
    }

    // Mendapatkan jumlah aktivitas dalam stack
    int getSize() {
        return menu.size();
    }
};

int main() {
    int stackSize;
    cout << "Masukkan ukuran stack: ";
    cin >> stackSize;

    MyStack menu(stackSize);

    int choice = 0;

    while (choice != 7) {
        cout << "\nMenu Sehari-hari: \n";
        cout << "1. Lihat Menu\n";
        cout << "2. Tambah Aktivitas\n";
        cout << "3. Hapus Aktivitas Teratas\n";
        cout << "4. Jumlah Aktivitas\n";
        cout << "5. Kosongkan Menu\n";
        cout << "6. Cek apakah Menu Kosong\n";
        cout << "7. Keluar\n";
        cout << "Pilih: ";
        cin >> choice;

        string newActivity;

        switch (choice) {
            case 1:
                menu.displayMenu();
                break;
            case 2:
                cout << "Masukkan aktivitas baru: ";
                cin.ignore();
                getline(cin, newActivity);
                menu.push(newActivity);
                break;
            case 3:
                menu.pop();
                break;
            case 4:
                cout << "Jumlah aktivitas dalam menu: " << menu.getSize() << endl;
                break;
            case 5:
                menu.clear();
                break;
            case 6:
                if (menu.isEmpty())
                    cout << "Menu kosong.\n";
                else
                    cout << "Menu tidak kosong.\n";
                break;
            case 7:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih angka 1-7.\n";
                break;
        }
    }

    return 0;
}

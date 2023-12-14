#include <iostream>

// Deklarasi prototipe fungsi void sapaan();
void sapaan();
int tambah(int a, int b);
double bagi(double a, double b);

// Definisi fungsi sapaan
void sapaan() {
    std::cout << "Halo, selamat datang!" << std::endl;
}

// Definisi fungsi tambah
int tambah(int a, int b) {
    return a + b;
}

// Definisi fungsi bagi
double bagi(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Pembagian oleh nol." << std::endl;
        return 0.0;
    }
}

int main() {
    // Memanggil fungsi sapaan
    sapaan();

    // Memanggil fungsi tambah
    int hasilTambah = tambah(5, 3);
    std::cout << "Hasil penjumlahan: " << hasilTambah << std::endl;

    // Memanggil fungsi bagi
    double hasilBagi = bagi(10.0, 2.0);
    std::cout << "Hasil pembagian: " << hasilBagi << std::endl;

    return 0;
}

#include <iostream>
#include <string>

struct Mahasiswa {
    std::string nama;
    int umur;
    std::string jurusan;
};

Mahasiswa inputDataMahasiswa() {
    Mahasiswa mhs;

    std::cout << "Masukkan Nama Mahasiswa: ";
    std::getline(std::cin, mhs.nama);
    std::cout << "Masukkan Umur Mahasiswa: ";
    std::cin >> mhs.umur;
    std::cin.ignore();
    std::cout << "Masukkan Jurusan Mahasiswa: ";
    std::getline(std::cin, mhs.jurusan);

    return mhs;
}

void tampilkanDataMahasiswa(const Mahasiswa daftarMahasiswa[], int jumlahMahasiswa) {
    std::cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        std::cout << "Mahasiswa ke-" << i + 1 << ":\n";
        std::cout << "Nama: " << daftarMahasiswa[i].nama << "\nUmur: " << daftarMahasiswa[i].umur << "\nJurusan: " << daftarMahasiswa[i].jurusan << "\n\n";
    }
}

int main() {
    const int MAX_MAHASISWA = 100; // Maksimum jumlah mahasiswa yang dapat dimasukkan
    Mahasiswa daftarMahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa = 0;

    while (true) {
        daftarMahasiswa[jumlahMahasiswa++] = inputDataMahasiswa();

        std::cout << "Apakah Anda ingin memasukkan data mahasiswa lagi? (y/n): ";
        char jawaban;
        std::cin >> jawaban;

        if (jawaban != 'y' && jawaban != 'Y') {
            tampilkanDataMahasiswa(daftarMahasiswa, jumlahMahasiswa);
            break;
        }
    }

    return 0;
}

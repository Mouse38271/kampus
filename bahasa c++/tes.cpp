#include <iostream>
#include <string>
#include <vector>

struct Mahasiswa {
    std::string nama;
    int umur;
    std::string jurusan;
};

// Fungsi untuk memasukkan data mahasiswa
Mahasiswa inputDataMahasiswa() {
    Mahasiswa mhs;

    std::cin.ignore(); // Membersihkan newline
    std::cout << "Masukkan Nama Mahasiswa: ";
    std::getline(std::cin, mhs.nama); // Input nama
    std::cout << "Masukkan Umur Mahasiswa: ";
    std::cin >> mhs.umur; // Input umur
    std::cin.ignore(); // Membersihkan newline
    std::cout << "Masukkan Jurusan Mahasiswa: ";
    std::getline(std::cin, mhs.jurusan); // Input jurusan

    return mhs;
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanDataMahasiswa(const std::vector<Mahasiswa>& daftarMahasiswa) {
    std::cout << "\nData Mahasiswa:\n";
    for (size_t i = 0; i < daftarMahasiswa.size(); ++i) {
        std::cout << "Mahasiswa ke-" << i + 1 << ":\n";
        std::cout << "Nama: " << daftarMahasiswa[i].nama << "\nUmur: " << daftarMahasiswa[i].umur
                  << "\nJurusan: " << daftarMahasiswa[i].jurusan << "\n\n";
    }
}

int main() {
    std::vector<Mahasiswa> daftarMahasiswa;
    int jumlahMahasiswa;

    std::cout << "Masukkan jumlah mahasiswa yang ingin diinput: ";
    std::cin >> jumlahMahasiswa;

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        std::cout << "\nMasukkan data untuk Mahasiswa ke-" << i + 1 << ":\n";
        Mahasiswa mhs = inputDataMahasiswa();
        daftarMahasiswa.push_back(mhs);
    }

    tampilkanDataMahasiswa(daftarMahasiswa);

    return 0;
}


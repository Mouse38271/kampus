#include <iostream>
#include <string>

int main() {
    std::string nama, alamat, npm, jurusan, quotes;

    // Menginput data dari pengguna
    std::cout << "\nData yang Anda masukkan:\n";
    std::cout << std::endl;

    // Memberikan jarak dengan tab
    std::cout << "Nama\t: ";
    std::getline(std::cin, nama);

    std::cout << "Alamat\t: ";
    std::getline(std::cin, alamat);

    std::cout << "NPM\t: ";
    std::getline(std::cin, npm);

    std::cout << "Jurusan\t: ";
    std::getline(std::cin, jurusan);

    std::cout << "Quotes versi kamu: ";
    std::getline(std::cin, quotes);

    // Mencetak data yang diinputkan dengan tab
    std::cout << "\nDATA MAHASISWA:\n";
    std::cout << "-------------------\n";
    std::cout << "Nama\t: " << nama << std::endl;
    std::cout << "Alamat\t: " << alamat << std::endl;
    std::cout << "NPM\t: " << npm << std::endl;
    std::cout << "Jurusan\t: " << jurusan << std::endl;
    std::cout << "Quotes\t: " << quotes<< std::endl;

    return 0;
}


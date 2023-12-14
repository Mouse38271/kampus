#include <iostream>
#include <string>

int main() {
    std::string nama, alamat, npm, jurusan, quotes;

    // Menginput data dari pengguna
    std::cout << "Masukkan Nama Anda: ";
    std::getline(std::cin, nama);

    std::cout << "Masukkan Alamat Anda: ";
    std::getline(std::cin, alamat);

    std::cout << "Masukkan NPM Anda: ";
    std::getline(std::cin, npm);

    std::cout << "Masukkan Jurusan Anda: ";
    std::getline(std::cin, jurusan);

    std::cout << "Masukkan Quotes Anda: ";
    std::getline(std::cin, quotes);

    // Mencetak data yang diinputkan dengan format yang lebih rapi
    std::cout << "\nData yang Anda masukkan:\n";
    std::cout << "=======================================\n";
    std::cout << "Nama: " << nama << std::endl;
    std::cout << "Alamat: " << alamat << std::endl;
    std::cout << "NPM: " << npm << std::endl;
    std::cout << "Jurusan: " << jurusan << std::endl;
    std::cout << "Quotes: " << quotes << std::endl;
    std::cout << "=======================================\n";

    std::cout << "Kalo sakit berobat, jangan nyusahin." << std::endl;

    return 0;
}


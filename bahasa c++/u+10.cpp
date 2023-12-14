#include <iostream>
#include <cstdio>

int main() {
    FILE *file = fopen("data.txt", "w+");

    if (file == NULL) {
        std::cerr << "Gagal membuka berkas." << std::endl;
        return 1;
    }

    // Menulis data ke berkas menggunakan fprintf
    fprintf(file, "Hello, World!\n");
    fprintf(file, "12345\n");

    // Menggeser posisi penunjuk berkas ke awal
    rewind(file);

    // Membaca data dari berkas menggunakan fscanf
    char text[100];
    int number;
    fscanf(file, "%s", text);
    fscanf(file, "%d", &number);

    std::cout << "Teks: " << text << std::endl;
    std::cout << "Angka: " << number << std::endl;

    // Menulis karakter ke berkas menggunakan fputc
    fputc('A', file);

    // Menggeser posisi penunjuk berkas ke awal
    rewind(file);

    // Membaca karakter dari berkas menggunakan fgetc
    int character = fgetc(file);
    std::cout << "Karakter: " << char(character) << std::endl;

    // Menutup berkas
    fclose(file);

    return 0;
}


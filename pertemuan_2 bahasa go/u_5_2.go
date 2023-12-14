package main

import "fmt"

// Deklarasi struct Mahasiswa
type Mahasiswa struct {
    Nama    string
    Umur    int
    Jurusan string
}

func main() {
    // Inisialisasi struct Mahasiswa
    var mhs Mahasiswa

    // Mengisi data pada struct Mahasiswa
    mhs.Nama = "Budi"
    mhs.Umur = 20
    mhs.Jurusan = "Informatika"

    // Menampilkan informasi mahasiswa
    fmt.Println("Nama Mahasiswa:", mhs.Nama)
    fmt.Println("Umur Mahasiswa:", mhs.Umur)
    fmt.Println("Jurusan Mahasiswa:", mhs.Jurusan)
}

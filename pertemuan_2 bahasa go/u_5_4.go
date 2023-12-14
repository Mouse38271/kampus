package main

import "fmt"

// Deklarasi struct
type Alamat struct {
	Jalan    string
	Kota     string
	Provinsi string
}

// Deklarasi struct Mahasiswa
type Mahasiswa struct {
	NPM    int
	Nama   string
	Alamat Alamat // Menyematkan struct Alamat ke dalam struct Mahasiswa
}

func main() {
	// Deklarasi variabel struct Mahasiswa
	mhs1 := Mahasiswa{
		NPM: 123456,
		Nama: "Gilang",
		Alamat: Alamat{
			Jalan:    "Jl. Raya",
			Kota:     "Jakarta",
			Provinsi: "DKI Jakarta",
		},
	}

	// Akses dan cetak nilai dari variabel struct
	fmt.Println("Alamat:")
	fmt.Println("NPM:", mhs1.NPM)
	fmt.Println("Nama: ", mhs1.Nama)
	fmt.Println("Jalan: ", mhs1.Alamat.Jalan)
	fmt.Println("Kota: ", mhs1.Alamat.Kota)
	fmt.Println("Provinsi: ", mhs1.Alamat.Provinsi)
}

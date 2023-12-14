package main

import (
	"fmt"
)

// Struct untuk menyimpan informasi tentang setiap merek HP
type Handphone struct {
	Nama  string
	Harga float64
}

func main() {
	// Array untuk menyimpan informasi tentang setiap merek HP
	handphones := [3]Handphone{
		{"Samsung", 3000000},
		{"Infinix", 2000000},
		{"Vivo", 2500000},
	}

	// Menampilkan menu
	fmt.Println("=== Menu Counter HP ===")
	for i, hp := range handphones {
		fmt.Printf("%d. %s\n", i+1, hp.Nama)
	}

	// Memilih merek HP
	var pilihan int
	fmt.Print("Pilih nomor HP: ")
	fmt.Scan(&pilihan)

	// Validasi pilihan
	if pilihan < 1 || pilihan > len(handphones) {
		fmt.Println("Pilihan tidak valid.")
		return
	}

	// Mendapatkan pointer ke struct HP yang dipilih
	hpTerpilih := &handphones[pilihan-1]

	// Menampilkan harga HP yang dipilih
	fmt.Printf("Harga %s: Rp %.0f\n", hpTerpilih.Nama, hpTerpilih.Harga)
}

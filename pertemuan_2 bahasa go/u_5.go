package main

import (
	"fmt"
	"os"
)

func main() {
	var buah = [10]string{"Apel", "Jeruk", "Mangga", "Anggur", "Pisang", "Salak", "Blewah", "Semangka", "Melon", "Blimbing"}

	fmt.Println("Daftar Buah:")
	for i, namaBuah := range buah {
		fmt.Printf("%d. %s\n", i+1, namaBuah)
	}

	fmt.Print("Pilih nomor buah yang ingin Anda beli (pisahkan dengan koma): ")
	var pilihan string
	_, err := fmt.Scan(&pilihan)
	if err != nil {
		fmt.Println("Error:", err)
		os.Exit(1)
	}

	var buahTerpilih []string
	for _, num := range pilihan {
		index := int(num - '0')
		if index < 1 || index > len(buah) {
			fmt.Printf("Nomor buah %d tidak valid. Melewatinya.\n", index)
			continue
		}
		buahTerpilih = append(buahTerpilih, buah[index-1])
	}

	fmt.Println("Anda memilih buah-buah:")
	for _, buah := range buahTerpilih {
		fmt.Println("-", buah)
	}
}

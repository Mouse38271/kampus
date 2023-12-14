package main

import "fmt"

// Fungsi untuk menukar nilai dua variabel menggunakan pointer
func tukarNilai(a *int, b *int) {
	temp := *a // Menyimpan nilai a di variabel temporary
	*a = *b    // Mengubah nilai a menjadi nilai b
	*b = temp  // Mengubah nilai b menjadi nilai yang disimpan di temporary
}

func main() {
	var x, y int
	x = 10
	y = 20

	// Mengirim alamat memori variabel x dan y ke dalam fungsi tukarNilai
	tukarNilai(&x, &y)

	fmt.Println("Sebelum pertukaran:")
	fmt.Println("Nilai x:", x)
	fmt.Println("Nilai y:", y)

	fmt.Println("\nSetelah pertukaran:")
	fmt.Println("Nilai x:", x)
	fmt.Println("Nilai y:", y)
}

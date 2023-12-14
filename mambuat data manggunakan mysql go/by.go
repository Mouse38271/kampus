package main

import (
	"bufio"
	"database/sql"
	"fmt"
	"log"
	"os"
	"strings"

	_ "github.com/go-sql-driver/mysql"
)

func main() {
	// Konfigurasi koneksi database
	db, err := sql.Open("mysql", "root:@tcp(localhost:3306)/mahasiswa")
	if err != nil {
		log.Fatal(err)
	}
	defer db.Close()

	// Uji koneksi ke database
	err = db.Ping()
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Connected to the database")

	// Input biodata mahasiswa dari user
	var nama, nim, jurusan, alamat string

	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Masukkan Nama\t : ")
	nama, _ = reader.ReadString('\n')
	nama = strings.TrimSpace(nama)

	fmt.Print("Masukkan NIM\t : ")
	nim, _ = reader.ReadString('\n')
	nim = strings.TrimSpace(nim)

	fmt.Print("Masukkan Jurusan : ")
	jurusan, _ = reader.ReadString('\n')
	jurusan = strings.TrimSpace(jurusan)

	fmt.Print("Masukkan Alamat\t : ")
	alamat, _ = reader.ReadString('\n')
	alamat = strings.TrimSpace(alamat)

	// Contoh: Insert data biodata mahasiswa
	_, err = db.Exec("INSERT INTO datamhs (nama, nim, jurusan, alamat) VALUES (?, ?, ?, ?)", nama, nim, jurusan, alamat)
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Data mahasiswa inserted successfully")

	// Menampilkan biodata mahasiswa dari database
	rows, err := db.Query("SELECT nama, nim, jurusan, alamat FROM datamhs")
	if err != nil {
		log.Fatal(err)
	}
	defer rows.Close()

	fmt.Println("Biodata mahasiswa from the database:")
	for rows.Next() {
		var nama, nim, jurusan, alamat string
		err := rows.Scan(&nama, &nim, &jurusan, &alamat)
		if err != nil {
			log.Fatal(err)
		}
		fmt.Printf("Nama: %s, NIM: %s, Jurusan: %s, Alamat: %s\n", nama, nim, jurusan, alamat)
	}
}

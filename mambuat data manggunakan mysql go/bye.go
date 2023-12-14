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
	// Membuka koneksi ke database
	db, err := sql.Open("mysql", "root:@tcp(localhost:3306)/mahasiswa")
	if err != nil {
		log.Fatal(err)
	}
	defer db.Close()

	// Memeriksa koneksi ke database
	err = db.Ping()
	if err != nil {
		log.Fatal(err)
	}
	fmt.Println("Connected to the database")

	// Membaca input dari pengguna
	var nama, umur, alamat string

	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Masukkan Nama\t : ")
	nama, _ = reader.ReadString('\n')
	nama = strings.TrimSpace(nama)

	fmt.Print("Masukkan Umur\t : ")
	fmt.Scanln(&umur)

	fmt.Print("Masukkan Alamat\t : ")
	alamat, _ = reader.ReadString('\n')
	alamat = strings.TrimSpace(alamat)


	// Menambahkan data ke database
	statement, err := db.Prepare("INSERT INTO biodata (nama, umur, alamat) VALUES (?, ?, ?)")
	if err != nil {
		log.Fatal(err)
	}
	defer statement.Close()

	result, err := statement.Exec(nama, umur, alamat)
	if err != nil {
		log.Fatal(err)
	}

	// Mendapatkan jumlah baris yang terpengaruh
	rowsAffected, err := result.RowsAffected()
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println("Data berhasil ditambahkan, jumlah data yang terpengaruh:", rowsAffected)

	// Membaca data dari database
	rows, err := db.Query("SELECT nama, umur, alamat FROM biodata")
	if err != nil {
		log.Fatal(err)
	}
	defer rows.Close()

	fmt.Println("Biodata dari database:")
	for rows.Next() {
		// Membaca data dari database
		var name string
		var age int
		var address string

		err := rows.Scan(&name, &age, &address)
		if err != nil {
			log.Fatal(err)
		}

		// Menampilkan data dari database
		fmt.Printf("Nama: %s, Umur: %d, Alamat: %s\n", name, age, address)
	}
}

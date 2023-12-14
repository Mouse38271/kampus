package main

import "fmt"

// bubblesort sorts an array of integers using the bubble sort algorithm.
func bubblesort(arr []int) {
    n := len(arr)
    for i := 0; i < n-1; i++ {
        for j := 0; j < n-i-1; j++ {
            if arr[j] > arr[j+1] {
                // Swap positions if elements are not in order
                arr[j], arr[j+1] = arr[j+1], arr[j]
            }
        }
    }
}

func main() {
    // Define an array of unsorted numbers
    angka := []int{64, 34, 25, 12, 22, 11, 90}

    fmt.Println("Array sebelum diurutkan:", angka)

    // Use the bubble sort algorithm to sort the array
    bubblesort(angka)

    fmt.Println("Array setelah diurutkan:", angka)
}

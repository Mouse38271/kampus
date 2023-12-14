#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node {
  int data;
  struct node *rantai;
};

// Function prototypes
int hitung_simpul(struct node *depan);
void cetak_data(struct node *depan);

int main() {
  struct node *depan = malloc(sizeof(struct node));
  depan->data = 50;
  depan->rantai = NULL;

  struct node *tengah = malloc(sizeof(struct node));
  tengah->data = 421;
  tengah->rantai = NULL;

  depan->rantai = tengah;

  struct node *tengah2 = malloc(sizeof(struct node));
  tengah2->data = 75; // Change the value as needed
  tengah2->rantai = NULL;

  tengah->rantai = tengah2;

  int jumlah = hitung_simpul(depan);
  printf("Jumlah Node pada Linked List adalah %d\n", jumlah);
  
  cetak_data(depan);

  getch(); // Wait for user input
  return 0;
}

int hitung_simpul(struct node *depan) {
  int hitung = 0;
  struct node *tunjuk = depan;

  while (tunjuk != NULL) {
    hitung++;
    tunjuk = tunjuk->rantai;
  }

  return hitung;
}

void cetak_data(struct node *depan) {
  if (depan == NULL) {
    printf("Linked list kosong\n");
    return;
  }

  struct node *tunjuk = depan;

  while (tunjuk != NULL) {
    printf("Data pada linked list adalah %d\n", tunjuk->data);
    tunjuk = tunjuk->rantai;
  }
}

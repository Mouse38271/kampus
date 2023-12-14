#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *rantai;
};

int hitung_simpul(struct node *depan);
void cetak_data(struct node *depan);

int main() {

  depan = (struct node*)malloc(sizeof(struct node));
  depan->data = 50;
  depan->rantai = NULL;

  tengah = (struct node*)malloc(sizeof(struct node));
  tengah->data = 42;
  tengah->rantai = NULL;

  depan->rantai = tengah;

  tengah->rantai = (struct node*)malloc(sizeof(struct node));
  tengah = tengah->rantai;
  tengah->data = 20;
  tengah->rantai = NULL;

  tengah->rantai = (struct node*)malloc(sizeof(struct node));
  tengah = tengah->rantai;
  tengah->data = 58;
  tengah->rantai = NULL;

  int hitung = hitung_simpul(depan);
  printf("Jumlah Node pada Linked List: %d\n", hitung);
	
  cetak_data(depan);

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
  struct node *tunjuk = depan;

  while (tunjuk != NULL) {
    printf("Data pada linked list ialah %d\n", tunjuk->data);
    tunjuk = tunjuk->rantai;
  }
}
#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();
    int usia;

    printf("-Algoritma menentukan kategori usia-\n");
    printf("Masukkan usia: ");
    scanf("%d", &usia);

    if (usia >= 0 && usia <= 2) {
        printf("Kategori usia: Bayi\n");
    } else if (usia >= 3 && usia <= 5) {
        printf("Kategori usia: Balita\n");
    } else if (usia >= 6 && usia <= 12) {
        printf("Kategori usia: Anak-anak\n");
    } else if (usia >= 13 && usia <= 20) {
        printf("Kategori usia: Remaja\n");
    } else if (usia >= 21 && usia <= 60) {
        printf("Kategori usia: Dewasa\n");
    } else if (usia > 60) {
        printf("Kategori usia: Lansia\n");
    } else {
        printf("Usia tidak valid.\n");
    }

    return 0;
}
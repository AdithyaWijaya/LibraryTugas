// 2. Bapak Romi ingin menentukan keterangan kategori usia. Jika usia 0-2 th dikategorikan bayi, usia 3-5th balita, usia 6-12th Anak-anak, usia 13-20th remaja, usia 21-60 dewasa, Usia diatas 60 Lansia.  Tentukan dan tampilkan keterangan kategori usia dari Usia yang diinput

#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();
    int usia;

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
// Volume Balok
#include <stdio.h>

int main() {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float panjang, lebar, tinggi, volume;

    printf("~Algoritma menghitung Volume Balok~\n");
    printf("Masukan panjang: ");
    scanf("%f", &panjang);
    printf("Masukan lebar: ");
    scanf("%f", &lebar);
    printf("Masukan tinggi: ");
    scanf("%f", &tinggi);

    volume = panjang * lebar * tinggi;

    printf("Volume Balok adalah: %.2f", volume);

    return 0;
}
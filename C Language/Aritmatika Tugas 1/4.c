// Luas Permukaan Balok
#include <stdio.h>

int main() {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float p, l, t, luas;

    printf("~Algoritma menghitung luas Permukaan Balok~\n");
    printf("Masukan panjang: ");
    scanf("%f", &p);
    printf("Masukan lebar: ");
    scanf("%f", &l);
    printf("Masukan tinggi: ");
    scanf("%f", &t);

    luas = 2 * ((p * l) + (p * t) + (l * t));

    printf("luas Permukaan Balok adalah: %.2f", luas);

    return 0;
}
// Luas Trapesium
#include <stdio.h>

int main() {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float alas1, alas2, tinggi, luas;

    printf("~Algoritma menghitung Luas Trapesium~\n");
    printf("Masukan alas pertama: ");
    scanf("%f", &alas1);
    printf("Masukan alas kedua: ");
    scanf("%f", &alas2);
    printf("Masukan tinggi: ");
    scanf("%f", &tinggi);

    luas = 0.5 * (alas1 + alas2) * tinggi;

    printf("Luas Trapesium adalah: %.2f", luas);

    return 0;
}
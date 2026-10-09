// Luas Lingkaran
#include <stdio.h>

int main() {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float r, luas;

    printf("~Algoritma menghitung Luas Lingkaran~\n");
    printf("Masukan jari-jari: ");
    scanf("%f", &r);

    luas = 3.14 * r * r;

    printf("Luas Lingkaran adalah: %.2f", luas);

    return 0;
}
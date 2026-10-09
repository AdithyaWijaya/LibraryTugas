// Keliling Lingkaran
#include <stdio.h>

int main() {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float jari_jari, keliling;

    printf("~Algoritma menghitung Keliling Lingkaran~\n");
    printf("Masukan jari-jari: ");
    scanf("%f", &jari_jari);

    keliling = 2 * 3.14 * jari_jari;

    printf("Keliling Lingkaran adalah: %.2f", keliling);

    return 0;
}
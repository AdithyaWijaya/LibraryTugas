// Luas Permukaan Tabung
#include <stdio.h>

int main() {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float jari_jari, tinggi, luas_permukaan;

    printf("~Algoritma menghitung Luas Permukaan Tabung~\n");
    printf("Masukan jari-jari: ");
    scanf("%f", &jari_jari);
    printf("Masukan tinggi: ");
    scanf("%f", &tinggi);

    luas_permukaan = 2 * 3.14 * jari_jari * (jari_jari + tinggi);

    printf("Luas Permukaan Tabung adalah: %.2f", luas_permukaan);

    return 0;
}
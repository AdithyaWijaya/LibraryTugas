// Luas Permukaan Kubus
#include <stdio.h>

int main() {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float sisi, luas_permukaan;

    printf("~Algoritma menghitung Luas Permukaan Kubus~\n");
    printf("Masukan sisi: ");
    scanf("%f", &sisi);

    luas_permukaan = 6 * (sisi * sisi);

    printf("Luas Permukaan Kubus adalah: %.2f", luas_permukaan);

    return 0;
}
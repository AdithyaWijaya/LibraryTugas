// Volume Kerucut
#include <stdio.h>

int main() {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float jari_jari, tinggi, volume;

    printf("~Algoritma menghitung Volume Kerucut~\n");
    printf("Masukan jari-jari: ");
    scanf("%f", &jari_jari);
    printf("Masukan tinggi: ");
    scanf("%f", &tinggi);

    volume = (1.0 / 3.0) * 3.14 * jari_jari * jari_jari * tinggi;

    printf("Volume Kerucut adalah: %.2f", volume);

    return 0;
}
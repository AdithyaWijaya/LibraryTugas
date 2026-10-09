// Volume Kubus
#include <stdio.h>

int main() {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float sisi, volume;

    printf("~Algoritma menghitung Volume Kubus~\n");
    printf("Masukan sisi: ");
    scanf("%f", &sisi);

    volume = sisi * sisi * sisi;

    printf("Volume Kubus adalah: %.2f", volume);

    return 0;
}
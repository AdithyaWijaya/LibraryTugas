// Volume Kerucut

#include <stdio.h>

int main () {
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");

    float r, t, v;

    printf("-Algoritma menghitung Volume Kerucut-\n");
    printf("Masukan jari-jari: ");
    scanf("%f", &r);
    printf("Masukan tinggi: ");
    scanf("%f", &t);

    v=(1.0/3.0)*3.14*r*r*t;

    printf("Volume Kerucut adalah: %.2f", v);
    return 0;
}

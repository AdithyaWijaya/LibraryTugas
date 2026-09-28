// Volume Kerucut

#include <stdio.h>
#include "namaku.c"

int main () {
    namaku();
    float r, t, v;

    printf("-Algoritma menghitung Volume Kerucut-\n");
    printf("\n");

    printf("Masukan jari-jari: ");
    scanf("%f", &r);
    printf("Masukan tinggi: ");
    scanf("%f", &t);
    printf("\n");

    v=(1.0/3.0)*3.14*r*r*t;

    printf("Volume Kerucut adalah: %.2f", v);
    return 0;
}
 
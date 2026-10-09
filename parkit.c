#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();
    int tarifParkir, waktuParkir, biayaTambahan=10000, totalBiaya;

    printf("Berapa jam kamu parkir? ");
    scanf("%d", &waktuParkir);

    if (waktuParkir <= 2) {
        tarifParkir=5000;
    } else if (waktuParkir <= 5) {
        tarifParkir=10000;
    } else if (waktuParkir <= 8) {
        tarifParkir=15000;
    } else if (waktuParkir >=8) {
        tarifParkir=20000;
    } else {
        tarifParkir=20000+biayaTambahan;
    }
    printf("Total biaya adalah: %d", tarifParkir);
}
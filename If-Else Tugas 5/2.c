#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();
    int tarifParkir, waktuParkir, biayaTambahan=0, totalBiaya;

    printf("-TARIF PARKIR-\n");
    printf("Berapa jam kamu parkir? ");
    scanf("%d", &waktuParkir);

    if (waktuParkir <= 2) {
        tarifParkir=5000;
    } else if (waktuParkir <= 5) {
        tarifParkir=10000;
    } else if (waktuParkir <= 8) {
        tarifParkir=15000;
    } else {
        tarifParkir=20000;
    }

    if (waktuParkir > 12) {
        biayaTambahan = 10000;
    }

    printf("Tarif parkir: %d\n", tarifParkir);
    totalBiaya=tarifParkir+biayaTambahan;
    printf("Biaya tambahan: %d\n", biayaTambahan);
    printf("Total biaya: %d", totalBiaya);
    return 0;
}

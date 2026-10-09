#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();
    int BB;

    printf("-KATEGORI BERAT BADAN-\n");
    printf("Masukan berat badan: ");
    scanf("%d", &BB);

    if (BB < 15) {
        printf("Kategori: Sangat ringan");
    } else if (BB <= 25) {
        printf("Kategori: Ringan");
    } else if (BB <= 40) {
        printf("Kategori: Normal");
    } else if (BB <= 55) {
        printf("Kategori: Berat");
    } else {
        printf("Kategori: Sangat Berat");
    }
    return 0;
}
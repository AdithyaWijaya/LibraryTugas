#include <stdio.h>

int main() {
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

    int nilai;

    printf("Masukan nilai siswa: ");
    scanf("%d", &nilai);

    if (nilai < 0 || nilai > 100) {
        printf("Nilai tidak valid\n");
    } else if (nilai >= 90) {
        printf("Predikat: A\n");
        printf("Keterangan: Sangat Baik");
    } else if (nilai >= 80) {
        printf("Predikat: B\n");
        printf("Keterangan: Baik");
    } else if (nilai >= 70) {
        printf("Predikat: C\n");
        printf("Keterangan: Cukup");
    } else if (nilai >= 60) {
        printf("Predikat: D\n");
        printf("Keterangan: Kurang");
    } else {
        printf("Predikat: E\n");
        printf("Keterangan: Sangat Kurang");
    }
    return 0;
}   

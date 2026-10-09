// Predikat Siswa
#include <stdio.h>

int main() {
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

    float nilai;
    printf("-Algoritma menentukan predikat siswa-\n");
    printf("\n");

    printf("Masukan nilai: ");
    scanf("%f", &nilai);
    printf("\n");

    if (nilai < 60)
        printf("Predikat: E");
    else if (nilai <= 69)
        printf("Predikat: D");
    else if (nilai <= 79)
        printf("Predikat: C");
    else if (nilai <= 89)
        printf("Predikat: B");
    else
        printf("Predikat: A");

    return 0;
}
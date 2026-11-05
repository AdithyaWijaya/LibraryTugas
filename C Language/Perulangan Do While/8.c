#include <stdio.h>

int main() {
    printf("Soal 8\n");
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

    int angka, i = 1;

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    do {
        printf("%d x %d = %d\n", angka, i, angka * i);
        i++;
    } while (i <= 10);

    return 0;
}
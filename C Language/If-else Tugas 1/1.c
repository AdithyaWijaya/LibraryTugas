// Harga Tiket Bioskop
#include <stdio.h>

int main() {
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

    float age;
    printf("-Algoritma menentukan harga tiket bioskop-\n");
    printf("\n");

    printf("Masukan usia: ");
    scanf("%f", &age);
    printf("\n");

    if (age <= 12)
        printf("Harga Rp 25.000");
    else if (age <= 17)
        printf("Harga Rp 35.000");
    else
        printf("Harga Rp 45.000");

    return 0;
}
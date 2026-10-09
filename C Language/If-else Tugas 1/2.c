// Kategori Usia
#include <stdio.h>

int main() {
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

    float age;
    printf("-Algoritma menentukan kategori usia-\n");
    printf("\n");

    printf("Masukan usia: ");
    scanf("%f", &age);
    printf("\n");

    if (age <= 12)
        printf("Kategori: Anak-anak");
    else if (age <= 17)
        printf("Kategori: Remaja");
    else
        printf("Kategori: Dewasa");

    return 0;
}
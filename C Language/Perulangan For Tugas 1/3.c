//Buatkan Program Menampilkan Hitung Mundur sejumlah n, dari n sampai 1

#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();

    int i, n;

    printf("Masukan angka: ");
    scanf("%d", &n);

    for (i=n;i>=1;i--) {
        printf("%d\n", i);
    }

}

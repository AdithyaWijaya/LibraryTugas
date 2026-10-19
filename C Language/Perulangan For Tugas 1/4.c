//Buatkan Program Menampilkan Bilangan Kelipatan 3 dimana bilangan n ditentukan. Kelipatan 3 sampai n

#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();

    int i, n;

    printf("Masukan angka: ");
    scanf("%d", &n);

    for (i=3; i<=n; i+=3) {
        printf("%d\n", i);
    }

    return 0;
}
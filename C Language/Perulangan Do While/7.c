#include <stdio.h>

int main() {
    printf("Soal 7\n");
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

    int i = 2, n, jumlah = 0;

    printf("Masukkan N: ");
    scanf("%d", &n);

    if (n >= 2) {
        do {
            printf("%d\n", i);
            jumlah += i;
            i += 2;
        } while (i <= n);
    }

    printf("Jumlah bilangan genap = %d\n", jumlah);

    return 0;
}
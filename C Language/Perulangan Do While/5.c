#include <stdio.h>

int main() {
    printf("Soal 5\n");
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");
    int i = 1, n, jumlah = 0;

    printf("Masukkan N: ");
    scanf("%d", &n);

    if (n >= 1) {
        do {
            printf("%d\n", i);
            jumlah += i;
            i++;
        } while (i <= n);
    }

    printf("Jumlah = %d\n", jumlah);

    return 0;
}
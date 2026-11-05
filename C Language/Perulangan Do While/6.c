#include <stdio.h>

int main() {
    printf("Soal 6\n");
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

    int i = 3, n;

    printf("Masukkan N: ");
    scanf("%d", &n);

    if (n >= 3) {
        do {
            printf("%d\n", i);
            i += 3;
        } while (i <= n);
    }

    return 0;
}
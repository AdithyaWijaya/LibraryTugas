#include <stdio.h>

int main() {
    printf("Soal 3\n");
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");
    int i = 1, n;

    printf("Masukkan N: ");
    scanf("%d", &n);

    if (n >= 1) {
        do {
            printf("%d\n", i);
            i += 2;
        } while (i <= n);
    }

    return 0;
}
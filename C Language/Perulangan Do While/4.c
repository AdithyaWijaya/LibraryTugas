#include <stdio.h>

int main() {
    printf("Soal 4\n");
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");
    int i, n;

    printf("Masukkan N: ");
    scanf("%d", &n);

    i = n;

    if (n >= 1) {
        do {
            printf("%d\n", i);
            i--;
        } while (i >= 1);
    }

    return 0;
}
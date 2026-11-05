#include <stdio.h>

int main() {
    printf("Soal 2\n");
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");
    
    int i = 2, n;

    printf("Masukkan N: ");
    scanf("%d", &n);

    if (n >= 2) {
        do {
            printf("%d\n", i);
            i += 2;
        } while (i <= n);
    }

    return 0;
}
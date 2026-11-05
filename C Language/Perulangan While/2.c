#include <stdio.h>

int main() {
    int i = 1, N;

    printf("Masukkan N: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}
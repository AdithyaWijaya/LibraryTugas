#include <stdio.h>

int main() {
    int i, N;

    printf("Masukkan N: ");
    scanf("%d", &N);

    i = N;

    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i = 3, N;

    printf("Masukkan N: ");
    scanf("%d", &N);

    while (i <= N) {
        printf("%d\n", i);
        i += 3;
    }

    return 0;
}
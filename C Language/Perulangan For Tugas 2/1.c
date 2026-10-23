#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();

    int i, n;

    printf("Masukan angka: ");
    scanf("%d", &n);

    for (i=5; i<=n; i+=5) {
        printf("%d\n", i);
    }
    return 0;
}

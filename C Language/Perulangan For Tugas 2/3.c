#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();

    int i, n;

    printf("Masukan angka: ");
    scanf("%d", &n);

    for (i=4; i<=n; i+=4) {
        printf("%d\n", i);
    }
    return 0;
}

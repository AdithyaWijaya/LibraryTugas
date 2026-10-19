#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();

    int i, n;

    printf("Masukan angka: ");
    scanf("%d", &n);

    for (i=2;i<=n;i+=2) {
        printf("%d\n", i);
    }
}

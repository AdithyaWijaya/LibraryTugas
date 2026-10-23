#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();

    int i, n;

    printf("Masukan angka: ");
    scanf("%d", &n);

    for (i=1;i<=n;i=i+2) {
        printf("%d\n", i);
    }
    return 0;
}

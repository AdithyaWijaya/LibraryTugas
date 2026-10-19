#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();

    int i, n;

    printf("Masukan angka: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++) {
        printf("%d\n", i);
    }

}

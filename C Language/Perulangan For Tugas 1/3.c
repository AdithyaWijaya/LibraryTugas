#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();

    int i, n;

    printf("Masukan angka: ");
    scanf("%d", &n);

    for (i=n;i>=1;i--) {
        printf("%d\n", i);
    }
    return 0;
}

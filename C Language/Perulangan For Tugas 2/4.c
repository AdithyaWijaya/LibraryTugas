#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();

    int i, n, sum=0;

    printf("Masukan angka: ");
    scanf("%d", &n);

    for (i=1; i<=n; i+=1) {
        printf("%d\n", i);
    }

    sum +=i;
    printf("%d\n", sum);
    return 0;
    
}

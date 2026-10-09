#include <stdio.h>
#include "namaku.c"

int main () {
    namaku();
    int hargaBarang, sigmaBarang, priceBeforeDiskon, priceAfterDiskon;
    float diskon;

    printf("-Tools Hitung Diskon Barang-\n");

    printf("Masukan harga barang: ");
    scanf("%d", &hargaBarang);
    printf("Masukan jumlah barang: ");
    scanf("%d", &sigmaBarang);
    printf("\n");

    priceBeforeDiskon=hargaBarang*sigmaBarang;

    printf("Total  harga sebelum diskon adalah: %d\n", priceBeforeDiskon);
    printf("\n");
    
    if (priceBeforeDiskon > 200000) {
        printf("Anda dapat diskon 20%%\n"), diskon=0.2;
    } else if (priceBeforeDiskon >= 100000) {
        printf("Anda dapat diskon 10%%\n"), diskon=0.1;
    } else {
        printf("Anda tidak dapat diskon\n"), diskon=0;
    }
    
    priceAfterDiskon=priceBeforeDiskon-(priceBeforeDiskon*diskon);
    
    printf("\n");
    printf("Total  harga setelah diskon adalah: %d", priceAfterDiskon);
    return 0;
}
#include <stdio.h>

int main () {
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

    int hargaBarang, sigmaBarang, priceBeforeDiskon, priceAfterDiskon;
    float diskon;

    printf("-Tools Hitung Diskon Barang-\n");

    printf("Masukan harga barang: ");
    scanf("%d", &hargaBarang);
    printf("Masukan jumlah barang: ");
    scanf("%d", &sigmaBarang);
    printf("\n");

    priceBeforeDiskon=hargaBarang*sigmaBarang;

    printf("Total  harga sebelum diskon adalah: %d", priceBeforeDiskon);
    printf("\n");

    if (priceBeforeDiskon > 200000) {
        printf("Anda dapat diskon 20%%"), diskon=0.2;
    } else if (priceBeforeDiskon >= 100000) {
        printf("Anda dapat diskon 10%%"), diskon=0.1;
    } else {
        printf("Anda tidak dapat diskon"), diskon=0;
    }
    printf("\n");

    priceAfterDiskon=priceBeforeDiskon-(priceBeforeDiskon*diskon);

    printf("Total  harga setelah diskon adalah: %d", priceAfterDiskon);
    return 0;
}
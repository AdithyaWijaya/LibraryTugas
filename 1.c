// 1. Ina memiliki sebuah toko yang menjual tiga jenis barang: tas, sepatu, dan dompet. Harga setiap barang adalah: Tas  75.000, Sepatu 120000, Dompet 50000 Jika total belanja lebih dari 100000 pembeli mendapat diskon 5%.
// Jika total belanja lebih dari 300000, maka pembeli mendapatkan diskon 15%, dibawah 100.000 tidak dapat diskon.

#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();
    int tas, sepatu, dompet, totalBelanja, hargaAfterDiskon;
    float diskon;

    printf("-TOKO PAK PATRIKA-\n");
    printf("Menjual barang branded\n");
    printf("\n");

    printf("Daftar barang:\n");
    printf("1. Tas Rp 75.000\n");
    printf("2. Sepatu Rp 120.000\n");
    printf("3. Dompet Rp 50.000\n");
    printf("\n");

    printf("Masukkan jumlah tas yang dibeli: ");
    scanf("%d", &tas);
    printf("Masukkan jumlah sepatu yang dibeli: ");
    scanf("%d", &sepatu);
    printf("Masukkan jumlah dompet yang dibeli: ");
    scanf("%d", &dompet);

    totalBelanja = (tas * 75000) + (sepatu * 120000) + (dompet * 50000);
    printf("Total belanja sebelum diskon: %d\n", totalBelanja);

    if (totalBelanja > 300000) {
        printf("Anda dapet Diskon: 15%%\n"), diskon=0.15;
    } else if (totalBelanja > 100000) {
        printf("Anda dapet Diskon: 5%%\n"), diskon=0.05;
    } else {
        printf("Anda GK dapet diskon.\n");
    }

    hargaAfterDiskon = totalBelanja - (totalBelanja * diskon);  
    printf("Total belanja setelah diskon: %d\n", hargaAfterDiskon);

    return 0;
}
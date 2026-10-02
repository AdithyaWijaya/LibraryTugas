#include <stdio.h>

int main() {
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

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
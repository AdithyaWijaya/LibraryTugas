#include <stdio.h>

int main()
{
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");

    int beras = 75000, minyakGoreng = 25000, gula = 18000, totalHarga, besarDiskon, totalHargaAfterDiskon, jumlahBeras, jumlahMinyak, jumlahGula;
    float diskon;

    printf("-Toko Pak Yanto-\n");
    printf("Daftar barang & Harga:\n");
    printf("1. Beras: Rp 75.000\n");
    printf("2. Minyak Goreng: Rp 25.000\n");
    printf("3. Gula: Rp 18.000\n");
    printf("\n");

    printf("Mau beli beras berapa? ");
    scanf("%d", &jumlahBeras);
    printf("Mau beli minyak goreng berapa? ");
    scanf("%d", &jumlahMinyak);
    printf("Mau beli gula berapa? ");
    scanf("%d", &jumlahGula);
    printf("\n");

    totalHarga = (beras * jumlahBeras) + (minyakGoreng * jumlahMinyak) + (gula * jumlahGula);
    printf("Total belanja sebelum diskon adalah: %d\n", totalHarga);

    if (totalHarga <= 100000) {
        diskon = 0, printf("Anda tidak mendapat diskon\n");
    } else if (totalHarga <= 250000) {
        diskon = 0.05, printf("Anda mendapat diskon 5%%\n");
    } else if (totalHarga <= 500000) {
        diskon = 0.10, printf("Anda mendapat diskon 10%%\n");
    } else {
        diskon = 0.15, printf("Anda mendapat diskon 15%%\n");
    }

    besarDiskon = totalHarga * diskon;
    printf("Besar diskon yang didapat adalah: %d\n", besarDiskon);

    totalHargaAfterDiskon = totalHarga - besarDiskon;
    printf("Total belanja setelah diskon adalah: %d\n", totalHargaAfterDiskon);
    return 0;
}
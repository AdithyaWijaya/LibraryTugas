#include <stdio.h>
#include "namaku.c"

int main() {
    namaku();
    int hargaTiket=40000, jumlahTiket, totalHarga, besarDiskon, totalHargaAfterDiskon;
    float diskon;

    printf("-ALGORITMA TIKET BIOSKOP-\n");
    printf("Mau beli tiket berapa? ");
    scanf("%d", &jumlahTiket);

    totalHarga=hargaTiket*jumlahTiket;
    printf("Total harga tiket adalah: %d\n", totalHarga);

    if (jumlahTiket <=2) {
        diskon=0, printf("Anda tidak dapat diskon\n");
    } else if (jumlahTiket <= 5) {
        diskon=0.05, printf("Anda dapat diskon 5%%\n");
    } else if (jumlahTiket <= 10) {
        diskon=0.1, printf("Anda dapat diskon 10%%\n");
    } else {
        diskon=0.15, printf("Anda dapat diskon 15%%\n");
    }
    
    besarDiskon=totalHarga*diskon;
    printf("Potongan sebesar: %d\n", besarDiskon);

    totalHargaAfterDiskon=totalHarga-besarDiskon;
    printf("Harga Akhir adalah: %d", totalHargaAfterDiskon);
}
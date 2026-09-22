#include <stdio.h>

int main () {
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");
    
    int buku=10000, pensil=2000, penghapus=1000, sigmaBuku, sigmaPensil, sigmaPenghapus, thsd, thfinal;
    float diskon;

    printf("-TOKO PAK YANTO-\n");
    printf("Menjual alat tulis\n");
    printf("\n");

    printf("Daftar barang:\n");
    printf("1. Buku Rp 10.000\n");
    printf("2. Pensil Rp 2.000\n");
    printf("3. Penghapus Rp 1.000\n");
    printf("\n");

    printf("Mau beli buku berapa? ");
    scanf("%d", &sigmaBuku);
    printf("Mau beli pensil berapa? ");
    scanf("%d", &sigmaPensil);
    printf("Mau beli penghapus berapa? ");
    scanf("%d", &sigmaPenghapus);
    printf("\n");

    thsd=((buku*sigmaBuku)+(pensil*sigmaPensil)+(penghapus*sigmaPenghapus));

    printf("Total belanja sebelum diskon adalah: %d", thsd);
    printf("\n");

    if (thsd >= 50000) {
        printf("Anda dapat diskon 10%%\n"), diskon=0.1;
    } else {
        printf("Anda tidak dapat diskon\n"), diskon=0;
    }

    thfinal=thsd-(thsd*diskon);

    printf("\n");
    printf("Total belanja setelah diskon adalah: %d", thfinal);
    return 0;
}
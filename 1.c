#include <stdio.h>

int main () {
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");
    
    int absen, gajiPokok=1000000, gajiHarian=100000, gajiTotal, gajiPajak, besarPajak;
    float pajak;

    printf("-Tools Gaji Karyawan-\n");
    printf("Masukan total kehadiran: ");
    scanf("%d", &absen);

    gajiTotal=gajiPokok+(absen*gajiHarian);
    printf("Gaji karyawan sebelum potong pajak adalah: %d\n", gajiTotal);

    if (gajiTotal <= 2000000) {
        pajak=0.05, printf("Karyawan terkena pajak sebesar 5%%\n");
    } else if (gajiTotal > 2000000 && gajiTotal <= 3000000) {
        pajak=0.08, printf("Karyawan terkena pajak sebesar 8%%\n");
    } else {
        pajak=0.1, printf("Karyawan terkena pajak sebesar 10%%\n");
    }

    besarPajak=gajiTotal*pajak;
    printf("Potong pajak sebesar: %d\n", besarPajak);

    gajiPajak=gajiTotal-besarPajak;
    printf("Gaji bersih karyawan adalah: %d\n", gajiPajak);
    return 0;
}
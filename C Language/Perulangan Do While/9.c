#include <stdio.h>

int main() {
    printf("Soal 9\n");
    printf("===============================\n");
    printf("I Gede Adithya Wijaya, XI.4, 6\n");
    printf("===============================\n");
    printf("\n");
    
    int i = 1, n;
    float bilangan, jumlah = 0, rata;

    printf("Masukkan banyak bilangan: ");
    scanf("%d", &n);

    if (n >= 1) {
        do {
            printf("Masukkan bilangan ke-%d: ", i);
            scanf("%f", &bilangan);

            jumlah += bilangan;
            i++;
        } while (i <= n);

        rata = jumlah / n;

        printf("Rata-rata = %.2f\n", rata);
    } else {
        printf("N harus lebih dari 0.\n");
    }

    return 0;
}
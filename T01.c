#include <stdio.h>
#include <string.h>
int getHarga (char kode[]){
    if  if (strcmp(kode, "NGS") == 0) return 15000;
    if (strcmp(kode, "AP") == 0) return 20000;
    if (strcmp(kode, "SA") == 0) return 25000;
    if (strcmp(kode, "BU") == 0) return 18000;
    if (strcmp(kode, "MAP") == 0) return 15000;
    if (strcmp(kode, "GG") == 0) return 15000;
    if (strcmp(kode, "SAM") == 0) return 17000;
    if (strcmp(kode, "RD") == 0) return 25000;
    if (strcmp(kode, "IB") == 0) return 35000;
    if (strcmp(kode, "NUK") == 0) return 20000;
    return 0;
}
int main () {
    char kode [10]
    int berat , porsi ;
    int harga, total=0;
     printf("Masukkan berat badan (kg): ");
    scanf("%d", &berat);

    if (berat >= 100)
        porsi = 2;
    else
        porsi = 1;

    printf("\nPorsi otomatis: %d\n", porsi);
    printf("Masukkan kode menu (END untuk selesai):\n");

    while (1) {
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0)
            break;

        harga = getHarga(kode);
        total += harga * porsi;
}
 double diskon = 0;

    if (total >= 500000) diskon = 0.25;
    else if (total >= 400000) diskon = 0.20;
    else if (total >= 300000) diskon = 0.15;
    else if (total >= 200000) diskon = 0.10;
    else if (total >= 100000) diskon = 0.05;

    double potongan = total * diskon;
    double totalAkhir = total - potongan;

    printf("\n==============================\n");
    printf("Total Belanja   : Rp %d\n", total);
    printf("Diskon          : Rp %.0lf\n", potongan);
    printf("Total Pembayaran: Rp %.0lf\n", totalAkhir);
    printf("==============================\n");

    return 0;
}
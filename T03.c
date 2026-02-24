#include <stdio.h>

int main() {
    char nama[50];
    int jenisLayanan;
    float berat, hargaPerKg, totalBiaya;

    // Input
    printf("=== SISTEM PENCATATAN CUCIAN LAUNDRY DEL ===\n");
    printf("Masukkan nama pelanggan : ");
    scanf("%s", nama);

    printf("\nPilih jenis layanan:\n");
    printf("1. Cuci Kering (Rp 5000/kg)\n");
    printf("2. Cuci + Setrika (Rp 8000/kg)\n");
    printf("Masukkan pilihan (1/2): ");
    scanf("%d", &jenisLayanan);

    printf("Masukkan berat cucian (kg): ");
    scanf("%f", &berat);

    // Proses
    if (jenisLayanan == 1) {
        hargaPerKg = 5000;
    } else if (jenisLayanan == 2) {
        hargaPerKg = 8000;
    } else {
        printf("Jenis layanan tidak valid!\n");
        return 0;
    }

    totalBiaya = berat * hargaPerKg;

    // Output
    printf("\n=== RINCIAN CUCIAN ===\n");
    printf("Nama Pelanggan : %s\n", nama);

    if (jenisLayanan == 1) {
        printf("Jenis Layanan : Cuci Kering\n");
    } else {
        printf("Jenis Layanan : Cuci + Setrika\n");
    }

    printf("Berat Cucian  : %.2f kg\n", berat);
    printf("Total Biaya  : Rp %.0f\n", totalBiaya);

    return 0;
}


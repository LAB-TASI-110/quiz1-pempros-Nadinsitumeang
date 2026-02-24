#include <stdio.h>
int main ( ){


    int N = 4 ;
    // Data nilai siswa 
    int nilai [4] = {75,65,80,70}
    // Nama siswa 
    char nama [4][10] {"yohana", "julius", "indah", "wilson "}
    char kelompok[4] = {'A', 'A', 'B', 'B'};

    char kelompokCari;
    int total = 0;

    // Input kelompok yang ingin dihitung
    printf("Masukkan kode kelompok yang ingin dihitung (A/B): ");
    scanf(" %c", &kelompokCari);

    // Proses penjumlahan nilai berdasarkan kelompok
    for (int i = 0; i < N; i++) 
        if (kelompok[i] == kelompokCari) {
            total += nilai[i];
}
}
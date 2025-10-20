#include <stdio.h>

int main() {
    char nama[50];
    int lama_inap, tipe_kamar;
    float harga_per_malam, total_harga, diskon = 0, harga_setelah_diskon;

    printf("=== Program Perhitungan Biaya Hotel ===\n\n");
    
    printf("Masukkan nama tamu: ");
    scanf("%s", nama);
    
    printf("\nPilih Tipe Kamar:\n");
    printf("1. Standar (Rp. 300,000/malam)\n");
    printf("2. Deluxe  (Rp. 500,000/malam)\n");
    printf("3. Suite   (Rp. 800,000/malam)\n");
    printf("Pilihan (1-3): ");
    scanf("%d", &tipe_kamar);
    
    printf("Lama menginap (malam): ");
    scanf("%d", &lama_inap);

    switch(tipe_kamar) {
        case 1:
            harga_per_malam = 300000;
            break;
        case 2:
            harga_per_malam = 500000;
            break;
        case 3:
            harga_per_malam = 800000;
            break;
        default:
            printf("Tipe kamar tidak valid!\n");
            return 1;
    }

    total_harga = harga_per_malam * lama_inap;

    if (lama_inap >= 7) {
        diskon = 0.25; 
    } else if (lama_inap >= 3) {
        diskon = 0.15; 
    } else if (lama_inap >= 1) {
        diskon = 0.05; 
    }

    harga_setelah_diskon = total_harga - (total_harga * diskon);

    printf("\n=== Detail Pembayaran ===\n");
    printf("Nama Tamu        : %s\n", nama);
    printf("Tipe Kamar       : %s\n", 
           tipe_kamar == 1 ? "Standar" : 
           tipe_kamar == 2 ? "Deluxe" : "Suite");
    printf("Lama Menginap    : %d malam\n", lama_inap);
    printf("Harga per Malam  : Rp. %.2f\n", harga_per_malam);
    printf("Total Harga      : Rp. %.2f\n", total_harga);
    printf("Diskon           : %.1f%%\n", diskon * 100);
    printf("Potongan Diskon  : Rp. %.2f\n", total_harga * diskon);
    printf("Total Pembayaran : Rp. %.2f\n", harga_setelah_diskon);

    return 0;
}
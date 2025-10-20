#include <stdio.h>

int main() {
    int bil1, bil2, hasil, op;

    printf("KALKULATOR SEDERHANA\n");

    printf("Masukkan bilangan pertama: ");
    scanf("%d", &bil1);

    printf("Masukkan bilangan kedua: ");
    scanf("%d", &bil2);

    printf("Pilih operasi:\n");
    printf("1. Penjumlahan (+)\n");
    printf("2. Pengurangan (-)\n");
    printf("3. Perkalian (*)\n");
    printf("4. Pembagian (/)\n");

    printf("Masukkan pilihan operasi (1-4): ");
    scanf("%d", &op);

    switch(op) {
        case 1:
            hasil = bil1 + bil2;
            printf("Hasil: %d + %d = %d\n", bil1, bil2, hasil);
            break;
        case 2:
            hasil = bil1 - bil2;
            printf("Hasil: %d - %d = %d\n", bil1, bil2, hasil);
            break;
        case 3:
            hasil = bil1 * bil2;
            printf("Hasil: %d * %d = %d\n", bil1, bil2, hasil);
            break;
        case 4:
            if(bil2 != 0) {
                hasil = bil1 / bil2;
                printf("Hasil: %d / %d = %d\n", bil1, bil2, hasil);
            } else {
                printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
            }
            break;
        default:
            printf("Pilihan operasi tidak valid.\n");
    }

}

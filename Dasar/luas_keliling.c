#include <stdio.h>
#include <math.h>
#define PI 3.14159

void calculateSquare() {
    float side;
    printf("\nPERSEGI\n");
    printf("Masukkan panjang sisi: ");
    scanf("%f", &side);
    printf("Luas: %.2f\n", side * side);
    printf("Keliling: %.2f\n", 4 * side);
}

void calculateCircle() {
    float radius;
    printf("\nLINGKARAN\n");
    printf("Masukkan jari-jari: ");
    scanf("%f", &radius);
    printf("Luas: %.2f\n", PI * radius * radius);
    printf("Keliling: %.2f\n", 2 * PI * radius);
}

void calculateTriangle() {
    float base, height, side1, side2, side3;
    printf("\nSEGITIGA\n");
    printf("Masukkan alas: ");
    scanf("%f", &base);
    printf("Masukkan tinggi: ");
    scanf("%f", &height);
    printf("Masukkan sisi 1: ");
    scanf("%f", &side1);
    printf("Masukkan sisi 2: ");
    scanf("%f", &side2);
    printf("Masukkan sisi 3: ");
    scanf("%f", &side3);
    
    printf("Luas: %.2f\n", 0.5 * base * height);
    printf("Keliling: %.2f\n", side1 + side2 + side3);
}

int main() {
    int choice;
    
    do {
        printf("\nKalkulator Bangun Datar\n");
        printf("1. Persegi\n");
        printf("2. Lingkaran\n");
        printf("3. Segitiga\n");
        printf("4. Keluar\n");
        printf("Pilih bangun datar (1-4): ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                calculateSquare();
                break;
            case 2:
                calculateCircle();
                break;
            case 3:
                calculateTriangle();
                break;
            case 4:
                printf("Program selesai!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while(choice != 4);
    
    return 0;
}
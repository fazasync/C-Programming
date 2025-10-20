#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

float fahrenheitToKelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinToFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

int main() {
    int choice;
    float temperature;

    do {
        printf("\nProgram Konversi Suhu\n");
        printf("1. Celsius ke Fahrenheit\n");
        printf("2. Celsius ke Kelvin\n");
        printf("3. Fahrenheit ke Celsius\n");
        printf("4. Fahrenheit ke Kelvin\n");
        printf("5. Kelvin ke Celsius\n");
        printf("6. Kelvin ke Fahrenheit\n");
        printf("7. Keluar\n");
        printf("Pilih konversi (1-7): ");
        scanf("%d", &choice);

        if (choice != 7) {
            printf("Masukkan suhu: ");
            scanf("%f", &temperature);
        }

        switch(choice) {
            case 1:
                printf("%.2f°C = %.2f°F\n", temperature, celsiusToFahrenheit(temperature));
                break;
            case 2:
                printf("%.2f°C = %.2f K\n", temperature, celsiusToKelvin(temperature));
                break;
            case 3:
                printf("%.2f°F = %.2f°C\n", temperature, fahrenheitToCelsius(temperature));
                break;
            case 4:
                printf("%.2f°F = %.2f K\n", temperature, fahrenheitToKelvin(temperature));
                break;
            case 5:
                printf("%.2f K = %.2f°C\n", temperature, kelvinToCelsius(temperature));
                break;
            case 6:
                printf("%.2f K = %.2f°F\n", temperature, kelvinToFahrenheit(temperature));
                break;
            case 7:
                printf("Program selesai!\n");
                break;
            default:
                printf("Pilihan tidak valid!\n");
        }
    } while(choice != 7);

    return 0;
}
#include <stdio.h>
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9.0 / 5.0 + 32.0;
}

int main() {
    int choice;
    double temperature;
    
    printf("Temperature Conversion Program\n");
    printf("-------------------------------\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);printf("Enter the temperature: ");
    scanf("%lf", &temperature);
    
    switch (choice) {
        case 1:
            printf("%.2f°C is equal to %.2f°F\n", temperature, celsiusToFahrenheit(temperature));
            break;
        case 2:
            printf("%.2f°F is equal to %.2f°C\n", temperature, fahrenheitToCelsius(temperature));
            break;
        case 3:
            printf("%.2f°C is equal to %.2fK\n", temperature, celsiusToKelvin(temperature));
            break;
        case 4:
            printf("%.2fK is equal to %.2f°C\n", temperature, kelvinToCelsius(temperature));
            break;
        case 5:
            printf("%.2f°F is equal to %.2fK\n", temperature, fahrenheitToKelvin(temperature));
            break;
        case 6:
            printf("%.2fK is equal to %.2f°F\n", temperature, kelvinToFahrenheit(temperature));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    
    return 0;
}

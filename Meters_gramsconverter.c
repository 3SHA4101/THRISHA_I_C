#include <stdio.h>
#include <string.h>

// Define a structure to represent a conversion
typedef struct {
    char from_unit[50];
    char to_unit[50];
    double (*convert)(double value); // Function pointer for conversion logic
} Conversion;

// Conversion functions for each type
double meters_to_kilometers(double value) {
    return value * 0.001;
}

double kilometers_to_meters(double value) {
    return value * 1000;
}

double grams_to_kilograms(double value) {
    return value * 0.001;
}

double kilograms_to_grams(double value) {
    return value * 1000;
}

double centimeters_to_meters(double value) {
    return value * 0.01;
}

double meters_to_centimeters(double value) {
    return value * 100;
}

double millimeters_to_meters(double value) {
    return value * 0.001;
}

double meters_to_millimeters(double value) {
    return value * 1000;
}

// Function to find and execute the correct conversion
double find_conversion(char* from_unit, char* to_unit, double value, Conversion conversions[], int num_conversions) {
    for (int i = 0; i < num_conversions; i++) {
        if (strcmp(from_unit, conversions[i].from_unit) == 0 && strcmp(to_unit, conversions[i].to_unit) == 0) {
            return conversions[i].convert(value);
        }
    }
    printf("Conversion from %s to %s is not supported.\n", from_unit, to_unit);
    return -1;
}

int main() {
    // Initialize all possible conversions
    Conversion conversions[] = {
        {"meters", "kilometers", meters_to_kilometers},
        {"kilometers", "meters", kilometers_to_meters},
        {"grams", "kilograms", grams_to_kilograms},
        {"kilograms", "grams", kilograms_to_grams},
        {"centimeters", "meters", centimeters_to_meters},
        {"meters", "centimeters", meters_to_centimeters},
        {"millimeters", "meters", millimeters_to_meters},
        {"meters", "millimeters", meters_to_millimeters}
    };
    
    int num_conversions = sizeof(conversions) / sizeof(conversions[0]);

    double value;
    char from_unit[50], to_unit[50];

    // Displaying welcome message
    printf("Welcome to the Unit Converter!\n");

    // Getting user input
    printf("Enter the value to convert: ");
    scanf("%lf", &value);
    printf("Enter the unit to convert from (e.g., meters, grams): ");
    scanf("%s", from_unit);
    printf("Enter the unit to convert to (e.g., kilometers, kilograms): ");
    scanf("%s", to_unit);

    // Perform conversion
    double result = find_conversion(from_unit, to_unit, value, conversions, num_conversions);

    // Display the result
    if (result != -1) {
        printf("%.2f %s is equal to %.2f %s\n", value, from_unit, result, to_unit);
    }

    return 0;
}

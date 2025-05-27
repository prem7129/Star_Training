#include <stdio.h>

// Function to categorize age group
const char* categorize_age(int age) {
    if (age < 13) {
        return "Child";
    } else if (age < 20) {
        return "Teenager";
    } else if (age < 60) {
        return "Adult";
    } else {
        return "Senior";
    }
}

// Function to determine the type of triangle
const char* determine_triangle_type(int a, int b, int c) {
    if (a == b && b == c) {
        return "Equilateral";
    } else if (a == b || b == c || a == c) {
        return "Isosceles";
    } else {
        return "Scalene";
    }
}

// Function to calculate electricity bill
float calculate_electricity_bill(int units) {
    float bill;
    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.5;
    } else if (units <= 300) {
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4;
    } else {
       .5 + 100 * 2.5 + 100 * 4 + (units - 300) * 6;
    }
    return bill;
}

int main() {
    int age = 25;
    printf("Age group: %s\n", categorize_age(age));

    int a = 3, b = 4, c = 5;
    printf("Triangle type: %s\n", determine_triangle_type(a, b, c));

    int units = 350;
    printf("Electricity bill: %.2f\n", calculate_electricity_bill(units));

    return 0;
}
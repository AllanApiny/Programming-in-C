#include <stdio.h>
#include <stdbool.h>

// Struct to represent the date
struct date {
    int month;
    int day;
    int year;
};

// Function to determine if a given year is a leap year
bool isLeapYear(struct date d) {
    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
        return true; // It's a leap year
    } else {
        return false; // Not a leap year
    }
}

// Function to find the number of days in a given month
int numberOfDays(struct date d) {
    const int daysPerMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (d.month == 2 && isLeapYear(d)) {
        return 29; // February in a leap year
    } else {
        return daysPerMonth[d.month - 1];
    }
}

int main(void) {
    struct date today, tomorrow;

    // Get today's date from user
    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i %i %i", &today.month, &today.day, &today.year);

    // Determine tomorrow's date
    if (today.day != numberOfDays(today)) {
        // Normal increment
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    } else if (today.month == 12) {
        // End of year case
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    } else {
        // End of month case
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    // Print tomorrow's date
    printf("Tomorrow's date is %i/%i/%.2i.\n", tomorrow.month, tomorrow.day, tomorrow.year % 100);
    return 0;
}
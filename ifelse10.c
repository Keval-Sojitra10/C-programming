#include <stdio.h>

int main() {
    int day, month, year;
    printf("Enter day, month, year: ");
    scanf("%d %d %d", &day, &month, &year);

    int isValid = 1; // assume valid

    if (year < 1) {
        isValid = 0; // year must be positive
    }
    else if (month < 1 || month > 12) {
        isValid = 0; // month range 1-12
    }
    else {
        // Days in each month
        int daysInMonth;
        if (month == 1 || month == 3 || month == 5 || month == 7 || 
            month == 8 || month == 10 || month == 12)
            daysInMonth = 31;
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            daysInMonth = 30;
        else {
            // February check for leap year
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                daysInMonth = 29;
            else
                daysInMonth = 28;
        }

        if (day < 1 || day > daysInMonth)
            isValid = 0;
    }

    if (isValid)
        printf("Valid Date ✅\n");
    else
        printf("Invalid Date ❌\n");

    return 0;
}

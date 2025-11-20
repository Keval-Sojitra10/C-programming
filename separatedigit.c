#include <stdio.h>

int main() {  
    int num, temp, divisor = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Find divisor (largest power of 10 smaller than number)
    while (temp >= 10) {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    printf("Separated digits are: ");

    while (divisor > 0) {
        digit = num / divisor;   // Get leftmost digit
        printf("%d", digit);

        num = num % divisor;     // Remove leftmost digit
        divisor = divisor / 10;  // Move to next place value

        if (divisor > 0) {
            printf(", ");
        }
    }

    return 0;
}

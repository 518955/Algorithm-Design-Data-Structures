#include "Reverser.h"

int Reverser::reverseDigit(int value) {
    if (value < 0) {
        return -1; // Invalid input
    } else if (value < 10) {
        return value;
    } else {
        int lastDigit = value % 10;
        int remainingDigits = value / 10;
        // Recursively reverse the remaining digits and append the last digit
        int reversedRemaining = reverseDigit(remainingDigits);
        int numDigits = 1;
        int temp = reversedRemaining;
        while (temp > 0) {
            temp /= 10;
            numDigits *= 10;
        }
        return lastDigit * numDigits + reversedRemaining;
    }
}

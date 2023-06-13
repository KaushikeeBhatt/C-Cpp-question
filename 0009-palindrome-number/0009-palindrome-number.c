#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;  // Negative numbers are not palindromes
    }

    double reversed = 0;
    double original = x;

    while (x != 0) {
        double digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }

    return (reversed == original);
}


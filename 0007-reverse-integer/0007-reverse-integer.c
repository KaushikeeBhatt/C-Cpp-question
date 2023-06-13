int reverse(int x){
    if (x == -2147483648) {
        return 0;
    }
    // Check if x is negative
    int is_negative = x < 0;

    // Convert x to positive if it is negative
    if (is_negative) {
        x = -x;
    }

    // Reverse the digits of x
    long long reversed_x = 0;
    while (x > 0) {
        reversed_x = (reversed_x * 10) + (x % 10);
        x /= 10;
    }

    // Check if the reversed number is within the 32-bit signed integer range
    if (is_negative) {
        reversed_x = -reversed_x;
    }
    if (reversed_x < INT_MIN || reversed_x > INT_MAX) {
        return 0;
    }

    return (int)reversed_x;

}
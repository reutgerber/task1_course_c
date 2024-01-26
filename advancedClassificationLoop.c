#include <stdio.h>

int isArmstrong(int num) {
    int originalNum = num;
    int n = 0;
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    int result = 0;
    for (int i = 0; i < n; ++i) {
        int remainder = originalNum % 10;
        int power = 1;
        for (int j = 0; j < n; ++j) {
            power *= remainder;
        }
        result += power;
        originalNum /= 10;
    }
    return result == num;
}

int isPalindrome(int num) {
    int reversed = 0, remainder, original = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    return original == reversed;
}
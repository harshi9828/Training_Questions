#include <stdio.h>
#include <string.h>

int is_palindrome(char *str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

int main() {
    char str[1000];
    scanf("%s", str);

    int length = strlen(str);
    int score = 0;

    // Check for palindromes of length 4
    for (int i = 0; i <= length - 4; ++i) {
        if (is_palindrome(str, i, i + 3)) {
            score += 5;
        }
    }

    // Check for palindromes of length 5
    for (int i = 0; i <= length - 5; ++i) {
        if (is_palindrome(str, i, i + 4)) {
            score += 10;
        }
    }

    printf("%d\n", score);

    return 0;
}

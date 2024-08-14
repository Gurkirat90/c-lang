#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[], int start, int end) {
    // Base case: when start and end pointers meet
    if (start >= end) {
        return 1;
    }

    // Check if characters at start and end are equal
    if (str[start] != str[end]) {
        return 0;
    }

    // Recursively check the remaining substring
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char input[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", input);

    // Check if the input string is a palindrome
    if (isPalindrome(input, 0, strlen(input) - 1)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
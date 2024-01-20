#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

void removeSpacesAndLowercase(char *str) {
    int i = 0, j = 0;
    while (str[i]) {
        if (!isspace((unsigned char)str[i])) {
            str[j++] = tolower((unsigned char)str[i]);
        }
        i++;
    }
    str[j] = '\0';
}

bool isPalindrome(char *str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please provide a string as an argument.\n");
        return 1;
    }

    char str[100]; // Ensure this is large enough to hold the input string
    strncpy(str, argv[1], sizeof(str));
    str[sizeof(str) - 1] = '\0'; // Ensure null-termination

    removeSpacesAndLowercase(str);

    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
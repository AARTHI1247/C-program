70. Write a C program to count the frequency of characters in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    int freq[256] = {0};
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    for (int i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] != 0) {
            printf("%c%d", str[i], freq[(unsigned char)str[i]]);
            freq[(unsigned char)str[i]] = 0;
            if (str[i + 1] != '\0') printf(" ");
        }
    }
    return 0;
}

Input: "hello" Output: h1 e1 2 01
Input: "aab" → Output: a2 b1
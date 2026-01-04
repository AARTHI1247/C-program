69. Write a C program to find the largest and smallest word in a string.

#include <stdio.h>
#include <string.h>
int main() {
    char str[200], word[100], largest[100], smallest[100];
    int i = 0, j = 0;
    int maxLen = 0, minLen = 1000;
    fgets(str, sizeof(str), stdin);
    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                if (j > maxLen) {
                    maxLen = j;
                    strcpy(largest, word);
                }
                if (j < minLen) {
                    minLen = j;
                    strcpy(smallest, word);
                }
                j = 0;
            }
        }
        if (str[i] == '\0')
            break;
        i++;
    }
    printf("Largest: %s, Smallest: %s", largest, smallest);
    return 0;
}


Input: "I love programming" → Output: Largest: programming, Smallest: I
Input: "C is fun" Output: Largest: fun, Smallest: C

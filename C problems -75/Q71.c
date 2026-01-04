71. Write a C program to check whether two strings are anagrams.

#include <stdio.h>
#include <string.h>
int main() {
    char s1[200], s2[200];
    int i, j;
    char temp;
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    if (strlen(s1) != strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = i + 1; s1[j] != '\0'; j++) {
            if (s1[i] > s1[j]) {
                temp = s1[i];
                s1[i] = s1[j];
                s1[j] = temp;
            }
        }
    }
    for (i = 0; s2[i] != '\0'; i++) {
        for (j = i + 1; s2[j] != '\0'; j++) {
            if (s2[i] > s2[j]) {
                temp = s2[i];
                s2[i] = s2[j];
                s2[j] = temp;
            }
        }
    }
    if (strcmp(s1, s2) == 0){
        printf("Anagram");
}
    else{
        printf("Not Anagram");
}
    return 0;
}


Input: "listen" "silent" → Output: Anagram
Input: "hello" "world" Output: Not Anagram
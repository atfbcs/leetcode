#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mergeAlternately(char* word1, char* word2){
    int A = strlen(word1), B = strlen(word2);
    int a = 0, b = 0, index = 0;
    char* s = (char *)malloc((A + B + 1) * sizeof(char)); // Allocate memory for the merged string (+1 for null terminator)
    if (!s) return NULL; // Handle memory allocation failure
    int word = 1;

    while (a < A && b < B) {
        if (word == 1) {
            s[index++] = word1[a++];
            word = 2;
        } else {
            s[index++] = word2[b++];
            word = 1;
        }
    }
    while (a < A) {
        s[index++] = word1[a++];
    }
    while (b < B) {
        s[index++] = word2[b++];
    }

    s[index] = '\0';
    return s;
}
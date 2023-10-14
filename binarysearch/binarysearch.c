#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binarysearch.h"

int main() {
    char filename[] = "sample.txt"; // Replace with your file name
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    struct WordInfo words[MAX_WORDS];
    int wordCount = 0;

    char word[MAX_WORD_LEN];
    while (fscanf(file, "%s", word) == 1 && wordCount < MAX_WORDS) {
        int index = binarySearch(words, wordCount, word);
        if (index != -1) {
            // Word already exists, increment count
            words[index].count++;
        } else {
            // Word not found, add it to the array
            words[wordCount].word = strdup(word);
            words[wordCount].count = 1;
            wordCount++;
        }
    }

    fclose(file);

    // Sort the array of structs
    qsort(words, wordCount, sizeof(struct WordInfo), compareWordInfo);

    char target[MAX_WORD_LEN];
    printf("Enter the word to search: ");
    scanf("%s", target);

    int index = binarySearch(words, wordCount, target);

    printResults(words, wordCount, target);

    // Free allocated memory
    freeWordInfo(words, wordCount);

    return 0;
}

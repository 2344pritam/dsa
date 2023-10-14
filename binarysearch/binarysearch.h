// wordcounter.h

#ifndef WORDCOUNTER_H
#define WORDCOUNTER_H

#define MAX_WORDS 1000
#define MAX_WORD_LEN 50

struct WordInfo {
    char *word;
    int count;
};

int compareWordInfo(const void *a, const void *b);
int binarySearch(struct WordInfo words[], int n, const char *target);
void freeWordInfo(struct WordInfo words[], int n);
void printResults(struct WordInfo words[], int wordCount, const char *target);

#endif // WORDCOUNTER_H

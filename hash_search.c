#include <stdio.h>

#define SIZE 10
#define N 8

int hashFunction(int key) {
    return key % SIZE;
}

void displayTable(int hashTable[]) {
    int i;

    printf("\nHash Table:\n");
    for (i = 0; i < SIZE; i++) {
        printf("[%d] : ", i);

        if (hashTable[i] == -1)
            printf("EMPTY");
        else
            printf("%d", hashTable[i]);

        printf("\n");
    }
}

void insert(int hashTable[], int key) {
    int index = hashFunction(key);

    while (hashTable[index] != -1) {
        index = (index + 1) % SIZE;
    }

    hashTable[index] = key;
}

int hashSearch(int hashTable[], int key, int *comparisons) {
    int index = hashFunction(key);
    int start = index;

    *comparisons = 0;

    while (hashTable[index] != -1) {
        (*comparisons)++;

        if (hashTable[index] == key)
            return index;

        index = (index + 1) % SIZE;

        if (index == start)
            break;
    }

    return -1;
}

int linearSearch(int arr[], int n, int key, int *comparisons) {
    int i;

    *comparisons = 0;

    for (i = 0; i < n; i++) {
        (*comparisons)++;

        if (arr[i] == key)
            return i;
    }

    return -1;
}

int main() {
    int songIDs[N] = {
        105, 210, 315, 420,
        525, 630, 735, 840
    };

    int hashTable[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
        hashTable[i] = -1;

    printf("HASH TABLE INSERTION\n");

    for (i = 0; i < N; i++) {
        printf("\nInserting %d\n", songIDs[i]);

        printf("Original hash index = %d\n",
               hashFunction(songIDs[i]));

        insert(hashTable, songIDs[i]);

        displayTable(hashTable);
    }

    printf("\nSEARCH RESULTS\n");

    int searchIDs[] = {105, 420, 840, 999};
    int searchCount = 4;

    for (i = 0; i < searchCount; i++) {
        int hashComparisons;
        int linearComparisons;
        int hashPosition;
        int linearPosition;

        hashPosition = hashSearch(
            hashTable,
            searchIDs[i],
            &hashComparisons
        );

        linearPosition = linearSearch(
            songIDs,
            N,
            searchIDs[i],
            &linearComparisons
        );

        printf("\nSearching for %d\n", searchIDs[i]);

        if (hashPosition != -1)
            printf("Hashing: Found at index %d, Comparisons = %d\n",
                   hashPosition, hashComparisons);
        else
            printf("Hashing: Not found, Comparisons = %d\n",
                   hashComparisons);

        if (linearPosition != -1)
            printf("Linear Search: Found at position %d, Comparisons = %d\n",
                   linearPosition, linearComparisons);
        else
            printf("Linear Search: Not found, Comparisons = %d\n",
                   linearComparisons);
    }

    return 0;
}

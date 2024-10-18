#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For INT_MAX

void sort(int myArray[], int length) {
    int ascend[length];
    int j = 1; // Use j=1 since ascend[0] is already set
    ascend[0] = myArray[0];

    // Find and set the first smallest element in myArray to ascend[0]
    for (int i = 1; i < length; i++) {
        if (myArray[i] < ascend[0]) {
            ascend[0] = myArray[i];
        }
    }

    while (j < length) {
        int nextMin = INT_MAX; // Initialize to the largest possible int value
        for (int i = 0; i < length; i++) {
            // Check if myArray[i] is a valid candidate for the next smallest
            if (myArray[i] > ascend[j - 1] && myArray[i] < nextMin) {
                    printf("ascend[%d]=%d, nextMin=%d, myArray[%d]=%d\n\n",j,ascend[j],nextMin,i,myArray[i]);
                nextMin = myArray[i];
            }
        }
        ascend[j] = nextMin; // Assign the next smallest element
        j++;
    }

    // Copy sorted elements back to the original array
    for (int i = 0; i < length; i++) {
        myArray[i] = ascend[i];
    }
}

int main() {
    int l;
    printf("Enter number of values in your array\n");
    scanf("%d", &l);
    int array[l];

    printf("Enter values of array\n");
    for (int i = 0; i < l; i++) {
        scanf("%d", &array[i]);
    }

    sort(array, l);

    printf("\nSorted Array\n");
    for (int i = 0; i < l; i++) {
        printf(" %d\n", array[i]);
    }

    return 0;
}


#include <stdio.h>

void merge(int array[], int L, int M, int R) {
    int i, j, k;
    int n1 = M - L + 1;
    int n2 = R - M;
    int Left[n1];
    int Right[n2];

    for (i = 0; i < n1; i++) {
        Left[i] = array[L + i];
    }
    for (j = 0; j < n2; j++) {  
        Right[j] = array[M + 1 + j];
    }

    i = 0;
    j = 0;
    k = L;

    while (i < n1 && j < n2) {
        if (Left[i] <= Right[j]) {
            array[k] = Left[i];
            i++;
        } else {
            array[k] = Right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        array[k] = Left[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = Right[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int L, int R) {
    if (L < R) {
        int M = L + (R - L) / 2; 
        mergeSort(array, L, M);
        mergeSort(array, M + 1, R);
        merge(array, L, M, R);
    }
}

int main() {
    int i, n;
    printf("Enter the Number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the Elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("The Array before sorting is: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
    mergeSort(array, 0, n - 1);
    printf("The Array after sorting is: ");
    for (i = 0; i < n; i++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}


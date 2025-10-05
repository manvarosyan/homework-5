#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int *arr;
    double sum = 0.0;
    double  average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)calloc(n, sizeof(int));

   
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    printf("Array after calloc: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
    average = sum / n;
    printf("Average of the array: %.2f\n", average);

 
    free(arr);

    return 0;
}


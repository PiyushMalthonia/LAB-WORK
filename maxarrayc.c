#include <stdio.h>
int main() {
    int arr[] = {10, 4, 8, 15, 6, 20};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    printf("Maximum element in the array is: %d\n", max);
     printf("Index of the maximum element is: %d\n", maxIndex);
    
    return 0;
}
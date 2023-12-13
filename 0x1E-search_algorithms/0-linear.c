#include <stdio.h>
#include 'search_algos.h'

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1; // Return -1 if the array is NULL
    }

    for (size_t i = 0; i < size; ++i) {
        printf("Comparing %d to %d\n", array[i], value);

        if (array[i] == value) {
            return i; // Return the index if the value is found
        }
    }

    return -1; // Return -1 if the value is not present in the array
}

int main() {
    int arr[] = {10, 5, 8, 2, 7};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int value_to_search = 8;

    int result = linear_search(arr, size, value_to_search);

    if (result != -1) {
        printf("Value %d found at index %d\n", value_to_search, result);
    } else {
        printf("Value %d not found in the array\n", value_to_search);
    }

    return 0;
}


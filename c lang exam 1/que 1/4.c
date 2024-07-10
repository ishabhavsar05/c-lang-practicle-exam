//write a c program to find sqaure of each elements of an 1D array using pointer

#include<stdio.h>
#include<conio.h>

void squareElements(int* arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        *(arr + i) = *(arr + i) * *(arr + i);
    }
}

int main() 
{
	int i;
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    squareElements(arr, n);

    printf("Array with squared elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

// Function prototype
int* findmid(int a[], int n);

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(a) / sizeof a[0];
    int *mid = findmid(a, n);
    printf("%d", *mid);
    return 0;
}

// Function definition
int* findmid(int a[], int n) {
    return &a[n / 2];
}


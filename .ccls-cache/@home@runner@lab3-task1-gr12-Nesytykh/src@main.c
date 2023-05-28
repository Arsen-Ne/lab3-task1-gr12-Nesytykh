#include <stdio.h>
#include <stdbool.h>

bool hasUniqueDigits(int num) {
    //todo
}

int countNumbersWithUniqueDigits(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (hasUniqueDigits(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = { 123, 456, 789, 121, 345 };
    int n = sizeof(arr);
    int count = countNumbersWithUniqueDigits(arr, n);
    printf("Количество чисел с уникальными цифрами: %dn", count);
    return 0;
}


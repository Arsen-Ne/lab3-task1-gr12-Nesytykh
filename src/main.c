#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool hasUniqueDigits(int num) {
    bool digits[10] = { false };
    while (num > 0) {
        int digit = num % 10;
        if (digits[digit]) {
            return false;
        }
        digits[digit] = true;
        num /= 10;
    }
    return true;
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
    int n;
    printf("insert massiv size: ");
    scanf("%d", &n);

    srand(101258);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000;
        printf("%d ", arr[i]);
    }
  
    int count = countNumbersWithUniqueDigits(arr, n);
    printf("Количество чисел с уникальными цифрами: %dn", count);
    return 0;
}


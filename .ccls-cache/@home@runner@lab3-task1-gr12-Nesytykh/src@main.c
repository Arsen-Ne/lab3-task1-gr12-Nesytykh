#include <stdbool.h>
#include <stdio.h>

int countNumbersWithUniqueDigits(int arr[], int n) {
  // todo
}

int main() {
  int arr[] = {123, 456, 789, 121, 345};
  int n = sizeof(arr);
  int count = countNumbersWithUniqueDigits(arr, n);
  printf("Количество чисел с уникальными цифрами: %dn", count);
  return 0;
}

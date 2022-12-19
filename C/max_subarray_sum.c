#include <stddef.h>

int maxSequence(const int* array, size_t n) {

    if (n < 1)
      return 0;
  
    int max_sum = 0, sum = 0;
    for (size_t i = 0; i < n; i++) {
      if (max_sum < array[i] + sum) {
        sum += array[i];
        max_sum = sum;
      } else if (max_sum < array[i]) {
        max_sum = array[i];
        sum = array[i];
      } else {
        sum = sum + array[i] > 0 ? sum + array[i] : 0;
        if (max_sum < sum) {
          max_sum = sum;
        }
      }
    }
  
  return max_sum;
}

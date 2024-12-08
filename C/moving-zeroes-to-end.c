#include <stddef.h>

void move_zeros(size_t len, int arr[len])
{
  int ctr = 0;
    for (size_t i = 0; i < len; i++) {
      if (arr[i]) {
        arr[ctr++] = arr[i];
      }
    }
  
  for (size_t i = ctr; ctr < len; ctr++)
    arr[ctr] = 0;
}

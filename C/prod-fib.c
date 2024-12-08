#include <stdlib.h>

typedef unsigned long long ull;

unsigned long long* productFib(ull prod) {
  
  ull num1 = 0, num2 = 1, sum = 0, prod1 = 0;
  
  while (prod1 < prod) {
    sum = num1 + num2;
    num1 = num2;
    num2 = sum;
    prod1 = num1 * num2;   
  }
  
  ull *ans = malloc(sizeof(ull) * 3);
  ans[0] = num1;
  ans[1] = num2;
  if (prod1 == prod) {
    ans[2] = 1;
  }
  else
    ans[2] = 0;
  
  return ans;
}

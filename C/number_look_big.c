#include <stdbool.h>

bool narcissistic(int num)
{
  int numCopy = num, numCopy1 = num, digit, sum = 0, ctr = 0, power = 1;
  
    while (num) {
      num /= 10; 
      ctr++;
    }  
    
    while (numCopy) {
      digit = numCopy % 10;
      power = 1;
        
      for (int i = 0; i < ctr; i++) {
        power *= digit;
      }
      sum += power;  
      numCopy /= 10;
    }
  
    if (sum == numCopy1)
      return true;
   
    return false;
}

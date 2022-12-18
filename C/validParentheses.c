#include <stdbool.h>

bool validParentheses(const char *str_in) {

  if (*str_in == ')') {
    return false;
  }
  
  int left = 0, right = 0;
  
  while (*str_in) {
      
    if (*str_in == '(')
      left++;
    
    if (*str_in == ')')
      right++;

    
    if (right > left)
      return false;
    
    str_in++;
  }
  
  if (left != right)
    return false;
  
  return true;
}

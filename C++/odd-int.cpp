#include <vector>

int findOdd(const std::vector<int>& numbers){
  
  int len = numbers.size();
  
  for (int i = 0; i < len; i++) {
    int ctr = 0;
    for (int j = 0; j < len; j++) {
      if (numbers[i] == numbers[j]) {
        ctr++;
      }
    }
    
    if (!((ctr - 1) % 2))
      return numbers[i];
  }
}

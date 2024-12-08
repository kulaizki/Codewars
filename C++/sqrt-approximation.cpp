#include <vector>

std::vector<int> sqrtApproximation(int number) {
  std::vector<int> sqrt;
  
  int i, prod = 0;
  for (i = 0; prod <= number; i++) {
    prod = i * i;
    if (prod == number) {
      sqrt.push_back(i);
      return sqrt;
    }
  }
  
  sqrt.push_back(i-2);
  sqrt.push_back(i-1);
  
  return sqrt;
}

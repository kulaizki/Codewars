#include <stddef.h>

double mean_square_error(size_t n, const int a[n], const int b[n]) {

    double difSquareSum = 0;
    
  
  for (size_t i = 0; i < n; i++) {
    int dif = (a[i] - b[i]);
    difSquareSum =  dif * dif + difSquareSum;
  }
  
  double mean = difSquareSum / n;

    return mean;
}

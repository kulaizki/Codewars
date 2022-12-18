typedef unsigned long long ull;

ull nth_fib(int n) {

    unsigned long long sum, num1 = 0, num2 = 1;
  
    for(int i = 0; i < n; i++) {
      sum = num1+num2;
      num1 = num2;
      num2 = sum;
    }
  
  return num2 - num1;
}

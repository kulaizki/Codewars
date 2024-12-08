typedef unsigned long long ull;

ull even_fib(ull limit) {
  
    unsigned long long sum = 0, evenSum = 0, num1 = 0, num2 = 1;
  
    while (sum < limit) {
        sum = num1+num2;       
        num1 = num2;
        num2 = sum;
      if (num1 % 2 == 0)
          evenSum += num1;
    }
  
  return evenSum;
}

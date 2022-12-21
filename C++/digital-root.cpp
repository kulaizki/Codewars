int digital_root(int n)
{
  if (n < 10) return n; // return if single-digit
  
  int sum = 0;
  while (n) { // sums digits
    sum += n % 10;
    n /= 10;
  }
  
  return digital_root(sum); // recursion
}

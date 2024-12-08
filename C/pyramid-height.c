unsigned int pyramid_height(unsigned int n) {
  
  unsigned square = 0;
  unsigned ctr = 0;
  int nCopy = n;
  while (nCopy > 0) {
    square++;
    nCopy -= (square*square);
    ctr++;
  }
  if (nCopy < 0) {
    return ctr - 1;
  }
  
  return ctr;
}

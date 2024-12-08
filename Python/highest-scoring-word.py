def high(s):
    L = [(w, sum([ord(c) - ord('a') + 1 for c in w])) for w in s.split()]
    
    return max(L, key=lambda x: x[1])[0]
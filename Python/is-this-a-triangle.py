def is_triangle(a, b, c):
    L = sorted([a, b, c])
    if a + b + c > 0 and (L[0] + L[1] > L[2]):
        return True
    return False
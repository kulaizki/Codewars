def is_isogram(string):
    s = string.lower()
    for c in s:
        if s.count(c) > 1:
            return False
    return True 
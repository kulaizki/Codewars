def valid_braces(string):
    s = []
    mp = {')': '(', ']': '[', '}': '{'}
    
    for c in string:
        if c in mp.values():
            s.append(c)
        elif c in mp and (not s or s.pop() != mp[c]):
            return False
    
    return len(s) == 0
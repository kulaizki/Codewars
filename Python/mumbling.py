def accum(st):
    ans = ""
    for i, c in enumerate(st):
        ans += c.upper() + c.lower() * i
        if i != len(st) - 1:
            ans += '-'
            
    return ans
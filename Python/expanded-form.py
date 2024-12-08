def expanded_form(num):
    s = str(num)
    n = len(s) - 1
    arr = []
    for i, c in enumerate(s):
        if c != '0':
            arr.append(c + '0' * (n - i))
            
    return ' + '.join(arr)
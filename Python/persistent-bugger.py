def persistence(n):
    cnt = 0
    while n > 9:
        n = eval('*'.join(str(n))) 
        cnt += 1
    
    return cnt
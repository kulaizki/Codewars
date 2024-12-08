def sort_array(source_array):
    odd_sorted = sorted(x for x in source_array if x & 1)
    res = []
    i = 0
    for x in source_array:
        if x & 1:
            res.append(odd_sorted[i])
            i += 1
        else:
            res.append(x)
    
    return res
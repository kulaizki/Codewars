def sum_of_intervals(iv):
    iv.sort(key=lambda x: x[0])
    s, e, total = iv[0][0], iv[0][1], 0

    for i in iv[1:]:
        if i[0] <= e:
            e = max(e, i[1])
        else:
            total += e - s
            s, e = i[0], i[1]

    total += e - s
    
    return total
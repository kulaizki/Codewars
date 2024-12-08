def count_smileys(arr):
    l = [":)", ";)", ":D", ";D", ";-)", ":-D", ":~)", ":~D", ";-D", ";~D"]
    c = 0
    for s in arr:
        if s in l:
            c += 1
    return c
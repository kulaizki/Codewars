def snail(array):
    res = []
    while array:
        res += array.pop(0)  
        if array:
            array = list(zip(*array))[::-1]
    return res
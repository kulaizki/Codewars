import string

def pig_it(text):
    s = ""
    words = text.split(' ')
    for i, w in enumerate(words):
        if w[0] in string.punctuation:
            s += w
        else:
            s += w[1:] + w[0] + 'ay'
        if i != len(words) - 1:
            s += ' '
    return s
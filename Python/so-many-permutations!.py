import itertools

def permutations(s):
    return [''.join(x) for x in set(itertools.permutations(s))]
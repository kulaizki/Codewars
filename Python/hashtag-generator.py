def generate_hashtag(s):
    res = '#'
    
    for w in s.split():
        res += w.capitalize()
    
    return False if len(res) > 140 or len(s) == 0 else res
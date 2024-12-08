def rot13(message):
    ans = ""
    for c in message:
        if c.isalpha():
            x = 65 if c.isupper() else 97
            ans += chr((ord(c) - x + 13) % 26 + x)
        else:
            ans += c
    return ans
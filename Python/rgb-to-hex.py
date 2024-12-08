def rgb(r, g, b):
    def clamp(x):
        return max(0, min(255, x))

    return f"{clamp(r):02X}{clamp(g):02X}{clamp(b):02X}"
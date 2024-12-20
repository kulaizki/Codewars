## Key 
- sort(L, key=lambda x: x[1])[0] # sorted by value, gets first element
- [(w, sum([ord(c) - ord('a') + 1 for c in w])) for w in s.split()]
- n = eval('*'.join(str(n))) # evaluates n * n * n
- if c in mp.values():
- if c in mp.keys(): 
- for i, c in enumerate(s) # need index
- int(''.join([str(x) for x in arr]), 2) # binary
- s.replace('!', '')
- d = {x: chr(x + 65) for x in range(26)}
- ''.join(sorted(set(a1 + a2)))
- bin(a+b)[2:] # num to binary
- {x: s.count(x) for x in list(s)}

## Functions
- bin() # turn to binary
- isalpha()
- isdigit()
- map() # Apply function to all items in an iterable
- reduce() # Apply a binary function to the items of an iterable (from functools)
- filter() # Filter elements from an iterable based on a function
- eval() # Evaluate a string as a Python expression (use with caution)
- ord() # Convert a character to its ASCII/Unicode value
- chr() # Convert an ASCII/Unicode value to a character
- min() 
- max() 
- divmod() # Return quotient and remainder
- any() # Check if any element in an iterable meets a condition
- all() # Check if all elements in an iterable meet a condition
- itertools.permutations() # Generate all permutations of a sequence
- itertools.combinations() # Generate all combinations of a sequence
- re.findall() # Find all occurrences of a pattern (from re module)

## Methods
- .split() # for strings
- .join() # for lists
- .upper()
- .lower()
- .set() # Remove duplicates or check membership
- .sort() # Sort a list in place
- .zfill() # Pad a string with leading zeros

def clean_string(A, B):
    result = ''
    
    # Check each character in A
    for ch in A:
        # If the character is not in B, add it to the result
        if ch not in B:
            result += ch
    
    # If result is empty, return "Empty"
    if not result:
        return "Empty"
    
    return result

# Example usage:
A = "HELLO"
B = "LO"
print(clean_string(A, B))  # Output: "HE"

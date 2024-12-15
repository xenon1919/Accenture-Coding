n = int(input("Enter number of strings: "))
s = [input("Enter string: ") for _ in range(n)]
longest = max(s, key=len)
shortest = min(s, key=len)
print("Longest string:", longest)
print("Shortest string:", shortest)
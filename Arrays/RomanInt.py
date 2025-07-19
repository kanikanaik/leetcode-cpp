s = "LVIII"
roman = {
    "I":1,
    "V":5,
    "X":10,
    "L":50,
    "C":100,
    "D":500,
    "M":1000
}
rev = s[::-1]
print(rev)
result = []
count = roman[rev[0]]

for i in range(0,len(s) -1):
    # for j in range(i+1,len(s)):
    if roman[rev[i]] > roman[rev[i+1]]:
        count -= roman[rev[i+1]]
    else:
        count += roman[rev[i+1]]

print(count)
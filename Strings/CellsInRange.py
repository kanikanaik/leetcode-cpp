s = "A1:F1"

output = []
start = s[0]
end = s[3]

start_num = int(s[1])
end_num = int(s[4])

for i in range(ord(start),ord(end) +1):
    for j in range(start_num,end_num +1):
        output.append(chr(i)+str(j))
print(output)
operations = ["++X","++X","X++"]
x = 0
for i in range(len(operations)):
    a = operations[i]
    if a == "X++" or a == "++X":
        x += 1
    else:
        x -= 1
print(x)
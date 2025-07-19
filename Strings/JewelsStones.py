jewels = "z"
stones = "ZZ"

count = 0
for char_i in jewels:
    for char_j in stones:
        if char_i == char_j:
            count += 1
print(count)

# jewels = "aA"
# stones = "aAAbbbb"

# count = 0
# if jewels in stones:
#     count += 1
# else:
#     print("Not found!")

# print(count)
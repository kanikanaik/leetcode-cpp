# letters = ["c","f","j"]
# target = "c"
# abc= []
# abc = letters.remove(target)
# print(abc)

# for i in range(len(letters)):
#     if target in letters[i]:
#         abc =letters.remove()
# if target == "z":
#     print(letters[0])

# if target in letters:
#     abc = letters.remove(target)
#     print(min(ord(abc)))
# else:
#     print(min(letters))

letters = ["x","x","y","y"]
target = "z"

if target in letters:
    for i in range(len(letters)):
        if target == letters[i]:
            print(letters[i+1])
else:
    print(letters[0])





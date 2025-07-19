word1 = ["a", "cb"]
word2 = ["ab", "c"]

# print(word1[1][0])

split1 = [] 
for i in range(len(word1)):
    for j in range(len(word1[i])):
        a = word1[i][j]
    split1.append(a)
print(split1)
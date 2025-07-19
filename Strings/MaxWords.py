sentences = ["please wait", "continue to fight", "continue to win"]
words = []
for i in range(len(sentences)):
    word = sentences[i].split()
    wor_length = len(word)
    words.append(wor_length)

print(max(words))

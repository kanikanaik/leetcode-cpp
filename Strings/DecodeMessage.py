from collections import OrderedDict

key = "the quick brown fox jumps over the lazy dog"
message = "vkbs bs t suepuv"

dict1 = {}
string = ""

hey = ("".join(OrderedDict.fromkeys(key))).replace(" ","")

for i in range(len(hey)):
    dict = {
        hey[i] : chr(i + 97)
    }
    dict1.update(dict)

for i in range(len(message)):
    if message[i] == " ":
        string += " "
    else:
        string += dict1[message[i]]
print(string)
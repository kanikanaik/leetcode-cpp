# s = "is2 sentence4 This1 abig3"
s = "Myself2 Me1 I4 and3"

string = ""
array = []
a = s.split(" ")

for i in range(len(a)):
    ab = a[i][-1]
    array.append(ab)
print(array)

for i in range(len(array)):
    min_array = (min(array))
    # print(min_array)
    abc = array.index(min_array)
    print(abc)
    string += (a[abc][:-1])+ " " 
    array.remove(array[abc])
    # print(array)

print(string)
# for i in range(0,len(a)):
#     if a[i][-1] == i+1:
#         string += a[i]
#     else:
#         pass
# print(string)
    
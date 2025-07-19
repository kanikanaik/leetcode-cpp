s = "codeleet"
b = "45670213"
indices = [4,5,6,7,0,2,1,3]
string = []
dict1 = {}

for i in range(len(s)):
    dict = {
        s[i] : indices[i]
    }
    dict1.update(dict)
print(dict1)
# string =[]
# for i in range(len(s)):
#     string += s[i].split()
# print(string)

# string[0] = "o" 
# print(string)
# for i in range:
#     s
#     print(s[i].split())
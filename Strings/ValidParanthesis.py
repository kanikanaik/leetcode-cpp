# class Solution:
#     def isValid(self, s: str) -> bool:


s = "(]"
if (len(s) % 2 != 0) :
    print("False")

dict = {"(":")","{":"}","[":"]"}
stack = []

for char in s:
    if char in dict.keys():
        stack.append(char)
    else:
        if stack == []:
            print("False")
        open_brac = stack.pop()
        if char != dict[open_brac]:
            print("False")
print(stack == []) 

# for i in range(len(s)):
#     if s[i] in dict.keys():
#         print("true")
    


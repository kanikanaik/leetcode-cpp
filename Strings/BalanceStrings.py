# # s = "RLRRLLRLRL"
# # temp = s
# # ans_counter = 0
# # for i in range(0, len(s), 2):
# #     temp = temp[:i]

# #     if (temp.count('R') == temp.count("L")) and (temp != ""):
# #         ans_counter = +1
# #         temp = temp[i:]
# #     else:
# #         pass
# #     print(temp)
# # print(s.count("R"))

# s = "RLRRLLRLRL"
# temp = s
# r_count = 0
# l_count = 0
# lenn = len(s)
# for i in range(lenn):
#     if s[i] == "R":
#         r_count += 1
#     elif (s[i] == "L"):
#         l_count += 1
#     if (r_count == l_count):
#         s = s[i:]
#         lenn = len-(r_count+l_count)
#         r_count, l_count = 0, 0

#         print(s)


# print(l_count)


# s = "RLRRLLRLRL"
# temp = s
# r_count = 0
# l_count = 0
# lenn = len(s)
# for i in range(lenn):
#     if s[i] == "R":
#         r_count += 1
#     elif s[i] == "L":
#         l_count += 1
#     if r_count == l_count and r_count != 0 and l_count != 0:
#         s = s[i+1:]
#         i = -1
#         lenn = len(s) - (r_count + l_count)
#         r_count, l_count = 0, 0
#         print(s)

class Solution:
    def balancedStringSplit(self, s: str) -> int: 
        i = 0
        ans = 0
        r_count, l_count = 0, 0
        while (s != ""):
            if s[i] == "R":
                r_count += 1
            elif s[i] == "L":
                l_count += 1
            if r_count == l_count and r_count != 0 and l_count != 0:
                s = s[i+1:]
                r_count, l_count = 0, 0
                i = 0
                ans += 1
            else:
                i += 1

        return ans
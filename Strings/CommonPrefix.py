# strs = ["flower","flow","flovd","flight"]

# abc = strs[2][0:1]
# bsd = abc[0:2]

# for i in range(0,len(strs)):
#     for j in range(len(strs)):
#         res = strs[j][i]
#         print(res)


def longestCommonPrefix(S) :
    if (len(S) == 0):
        return ""
    for i in range(len(S[0])):
        c = S[0][i]
        for j in range(len(S)):
            if (i == len(S[j]) or S[j][i] != c):
                return S[0][0:i];             
    return S[0]
 

if __name__ == "__main__":
    # Your code goes here
    s = ['flower', 'flow', 'flight']
    print(longestCommonPrefix(s))
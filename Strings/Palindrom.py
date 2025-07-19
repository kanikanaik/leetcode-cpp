# string = "10"
# ulta = string[::-1]

# print(ulta)

# num=
# temp=num
# rev=0
# while(num < 0):
#     dig=num%10
#     rev=rev*10+dig
#     num=num//10
# if(temp==rev):
#     print("The number is palindrome!")
# else:
#     print("Not a palindrome!")

            # x = 121
            # temp = x
            # rev = 0
            # while x > 0:
            #     reminder = x % 10
            #     rev = (rev * 10) + reminder
            #     x = x // 10
            # if (rev == x):
            #     return "true"
            # else:
            #     return "false"


# x = 10
# def reverse(x):

#     rvrs = 0
#     while x > 0:
#         digit = x % 10
#         rvrs = rvrs * 10 + digit
#         x = x // 10
#     return rvrs

# if(x == reverse(x)) and x > 0:
#     print("true")
# else:
#     print("false")

class Solution(object):
    def isPalindrome(self,x):
        def reverse(x):
            x = abs(x)
            rvrs = 0
            while x > 0:
                digit = x % 10
                rvrs = rvrs * 10 + digit
                x = x // 10
            return rvrs

        if(x<0):
            return "false"
        elif(x == reverse(x)) and x >= 0:
            return "true"
        

sol = Solution()
print(sol.isPalindrome(-121))

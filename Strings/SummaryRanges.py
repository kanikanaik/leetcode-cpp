nums = [0,1,2,4,5,7]
count = 0

for i in range(len(nums) - 1):
    if(nums[i+1] == (nums[i] + 1)):
        print(nums[i],"->",nums[i+1])
    else:
        print(nums[i + 1])
        # count += 1

# print(count)
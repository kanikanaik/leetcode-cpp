nums = [2, 7, 11, 15];
target = 9;

for i in range(0,len(nums)):
    for j in range(i+1,len(nums)):
        result = nums[i] + nums[j]
        if target == result:
            print[i,j]

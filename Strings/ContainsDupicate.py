nums = [1,2,3,1]
abc = []
myset = []
 
    # Traverse the input array
for i in range(nums):
     
        # If already present n hash, then we
        # found a duplicate within k distance
    if nums[i] in myset:
        print("true")
 
        # Add this item to hashset
        myset.append(nums[i])
 
        # Remove the k+1 distant item
        if (i >= k):
            myset.remove(arr[i - k])
    return False

print(abc)
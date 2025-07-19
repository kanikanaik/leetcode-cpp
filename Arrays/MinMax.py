arr = [3, 5, 4, 1, 9]

mini = 100
maxi = 0

print(arr)

for i in range(len(arr)):
    if arr[i] < mini:
        mini = arr[i]
    if arr[i] > maxi:
        maxi = arr[i]
        
print("Minimum number is : ",mini)
print("Maximum number is : ",maxi)
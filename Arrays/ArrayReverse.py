arr = [1, 4, 3, 2, 6, 5]
N = len(arr)
temp = []
for i in range(1,N +1):
    temp.append(arr[N - i])
print(temp)

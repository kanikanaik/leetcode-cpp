grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]
col = []
count = 0

for i in range(len(grid)):
    a =[]
    for j in range(len(grid[i])):
        a.append(grid[j][i])
    col.append(a)

for i in range(len(grid)):
    for j in range(len(grid[i])):
        if grid[i] == col[j]:
            count += 1
print(count)


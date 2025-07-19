grid = [[3,2],[1,0]]
count = 0
for i in range(0,len(grid)):
    len_grid = len(grid[i])
    for j in range(0,len_grid):
        if (grid[i][j] < 0):
            count += 1

print(count)
        # print(grid[i][j])
    # print(len(grid[i]))

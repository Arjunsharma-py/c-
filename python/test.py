row1, row2, col1, col2 = 2,2,2,4
arr=[[2,1],
    [3,4]]

arr2 = [[2,1,1,2],[3,3,2,2]]


c = [[0]*col2]*row1

for i in range(len(arr)):
    for j in range(len(arr2[0])):
        for k in range(len(arr2)):
            c[i][j] += arr[i][k] * arr2[k][j]


for i in c:
    print(i)
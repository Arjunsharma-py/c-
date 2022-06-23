arr = []
arr2 = []
row1 = int(input("Enter the number of rows for matrix 1: "))
col1 = int(input("Enter the number of columns for matrix 1: "))
print("Enter the elements of matrix1: ")
for i in range(row1):
    col = []
    for j in range(col1):
        a = int(input())
        col.append(a)
    arr.append(col)
row2 = int(input("Enter the number of rows for matrix 2: "))
col2 = int(input("Enter the number of columns for matrix 2: "))
print("Enter the elements of matrix 2: ")
for i in range(row2):
    col = []
    for j in range(col2):
        a = int(input())
        col.append(a)
    arr2.append(col)
c = []
for i in range (0,row1):
    c.append([])
for i in range (0,row1):
    for j in range (0,col2):
        c[i].append(j)
        c[i][j]=0
if col1 == row2:
    for i in range(len(arr)):
        for j in range(len(arr2[0])):
            for k in range(len(arr2)):
                c[i][j] += arr[i][k] * arr2[k][j]
else:
    print("Multiplication of these two matrices is not possible")
print("Result:")
for i in c:
    print(i)
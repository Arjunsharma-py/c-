list = []
a = int(input("Enter the size of list: "))
print("Enter the elements: ")
for i in range(a):
    b = int(input())
    list.append(b)

for i in range(len(list)):
    minIdx = i
    for j in range(i+1, len(list)):
        if list[minIdx] > list[j]:
            minIdx = j

    temp = list[minIdx]
    list[minIdx]=list[i]
    list[i]=temp
    
print ("Sorted list in ascending order: ")
for i in range(len(list)):
    print(list[i])
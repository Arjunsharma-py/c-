from array import array
from msvcrt import kbhit


def MergeSort(array):
    print("splitting ", array)
    if len(array)>1:
        mid = len(array)//2
        left = array[:mid]
        right = array[mid:]

        MergeSort(left)
        MergeSort(right)

        i = j = k = 0
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                array[k] = left[i]
                i = i + 1
            else:
                array[k] = right[j]
                j = j + 1
            k = k + 1
        
        while i < len(left):
            array[k] = left[i]
            i = i + 1
            k = k + 1

        while j < len(right):
            array[k] = right[j]
            j = j + 1
            k = k + 1
    print("Merging", array)

array = []
n = int(input("Enter the size of array: "))
print("Enter elements of array: ")

for i in range(n):
    a = int(input())
    array.append(a)

MergeSort(array)
print(array)
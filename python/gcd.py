def gcdOfTwo(a, b):
    gcd = 1
    for i in range(2,min(a,b)+1):
        if(a%i==0 and b%i==0):
            gcd = i
    return gcd

x = int(input("Enter the first no.: "))
y = int(input("Enter the second no.: "))

print(gcdOfTwo(x, y))
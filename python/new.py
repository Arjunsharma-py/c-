from random import randint

n=int(input("1. Easy\n2. Medium\n3. Hard\n"))

def calphabet():
    string1 = '_ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    return string1[randint(0,26)]
def salphabet():
    string2 = 'abcdefghijklmnopqrstuvwxyz'
    return string2[randint(0,26)]
def special():
    string3 = '!@#$%&*'
    return string3[randint(0,6)]
def num():
    return randint(0,10)

for i in range(9):
    if(n==1):
        print(salphabet(), end='')
    elif(n==2):
        m=randint(0,2)
        if(m==0):
            print(salphabet(), end='')
        else:
            print(num(), end='')
    elif(n==3):
        k=randint(0,4)
        if(k==0):
            print(salphabet(), end='')
        if(k==1):
            print(calphabet(), end='')
        if(k==2):
            print(special(), end='')
        if(k==3):
            print(num(), end='')
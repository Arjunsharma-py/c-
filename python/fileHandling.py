with open('Handling.txt', 'r') as file :
    temp = []
    list = []
    count, great, grt = 0, 0, 0
    data = file.readlines()
    for line in data:
        word = line.split()
        word = temp + word
        temp = word

    for i in range(len(temp)):
        count = 0
        for j in range(i+1, len(temp)):
            if temp[i]==temp[j]:
                count += 1
        if grt<count:
            grt = count
            great = temp[i]
        
    print("'", great ,"' has maximum", grt, "times count")

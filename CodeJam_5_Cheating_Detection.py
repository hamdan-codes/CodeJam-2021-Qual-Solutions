
# Author Chaudhary Hamdan
# C++ Template for Competitive Programming
# Github link : https://github.com/hamdan-codes


t = int(input())
for _ in range(t):
    p = int(input())
    data = []
    for i in range(100):
        data.append(input())

    idx = 0
    ones = data[0].count('1')

    for i in range(1, 100):
        c = data[i].count('1')
        if c > ones:
            idx = i
            ones = c
    print('Case #'+str(_+1)+': '+str(idx+1))




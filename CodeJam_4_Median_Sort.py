
# Author Chaudhary Hamdan
# C++ Template for Competitive Programming
# Github link : https://github.com/hamdan-codes


import sys

T, N, Q = [int(x) for x in input().split()]
#print(T, N, Q, file=sys.stderr)

def log(*a):
    #print(*a, file=sys.stderr)
    pass

def query(*a):
    print(*a)
    sys.stdout.flush()
    r = input()
#     log(a, r)
    return r

def solve():    
    L = [1,2]
    for n in range(3, N+1):
        for i in range(len(L)-1):
            r = query(L[i], L[i+1], n)
            r = int(r)
            if r==n:
                L = L[:i+1] + [n] + L[i+1:]
                break
            if r==L[0]:
                L = [n] + L
                break
            if r==L[-1]:
                L = L + [n]
                break
    log(L)
    r = query(*L)
    

    
for t in range(T):
    solve()
    
#sys.exit()
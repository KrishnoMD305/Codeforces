# Krishno_Mondol_KUET_CSE
def solve(): 
    n = int(input())
    v = list(map(int,input().split()))
    if all(x==0 for x in v):
        print("0")
        return
    l = next(i for i,x in enumerate(v) if x!=0)
    r = next(i for i in range(n-1,-1,-1) if v[i]!=0)
    print(2 if 0 in v[l:r+1] else 1)

t = int(input())
for i in range(t):
    solve()

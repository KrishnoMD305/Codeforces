# 321234537
# Krishno_Mondol_KUET_CSE
def solve():
    n = int(input())
    v = list(map(int,input().split()))
    if n==1:
        print("0")
        return
    mini = min(v[:-1])
    maxi = max(0,v[-1] - mini)
    mm = max(v[1:])
    maxi = max(maxi,mm-v[0])
    maxi = max(maxi,max(v[i]-v[i+1] for i in range(len(v)-1)))
    print(maxi)

t = int(input())
for i in range(t):
    solve()

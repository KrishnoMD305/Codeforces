# 322697477
# Krishno_Mondol_KUET_CSE
def solve(): 
    n,k = map(int,input().split())
    v = list(map(int,input().split()))
    e,ans = 0,k
    e = sum(e+1 if i%2==0 else e for i in v)
    for i in v:
        ans = min(ans,(k-(i%k))%k)
    if k==4:
        if e>=2: ans = 0
        elif e==1: ans = min(ans,1)
        else: ans = min(ans,2)
    print(ans)
 
t = int(input())
for i in range(t):
    solve()

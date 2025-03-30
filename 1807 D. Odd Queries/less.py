from itertools import accumulate
# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,q = map(int,input().split())
    v = list(map(int,input().split()))
    pr = list(accumulate(v))
    for i in range(q):
        l,r,k = map(int,input().split())
        mod = pr[n-1]-pr[r-1]+(pr[l-2] if l>1 else 0)+(r-l+1)*k
        print("NO" if mod%2==0 else "YES")

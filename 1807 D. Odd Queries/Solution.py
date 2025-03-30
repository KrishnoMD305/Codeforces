# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,q = map(int,input().split())
    v = list(map(int,input().split()))
    pr =[0]*n
    pr[0] = v[0]
    for i in range(1,n):
        pr[i] = pr[i-1] + v[i]
    for i in range(q):
        l,r,k = map(int,input().split())
        total = pr[n-1]
        ran_t = pr[r-1]- (pr[l-2] if l>1 else 0)
        mod = total-ran_t+(r-l+1)*k
        if mod%2 == 0:
            print("NO")
        else:
            print("YES")

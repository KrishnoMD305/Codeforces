# 315154777	        Apr/12/2025 19:58UTC+6	        Krishno_MD	        1914C - Quests	        PyPy 3-64	        Accepted	        234 ms	        30500 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,k = map(int,input().split())
    v1 = list(map(int,input().split()))
    v2 = list(map(int,input().split()))
    a = []
    a.append(v2[0])
    for i in range(1,n):
        a.append(max(a[i-1],v2[i]))
    ans,tot = 0,0
    for i in range(0,min(n,k)):
        tot += v1[i]
        l = k-(i+1)
        f = tot+l*a[i]
        ans = max(ans,f)
    print(ans)

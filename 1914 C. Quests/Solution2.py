# 315154897	        Apr/12/2025 19:58UTC+6	        Krishno_MD	        1914C - Quests	        PyPy 3-64	        Accepted	        218 ms	        30700 KB

import itertools
# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,k = map(int,input().split())
    v1 = list(map(int,input().split()))
    v2 = list(map(int,input().split()))
    a = list(itertools.accumulate(v2,max))
    ans,tot = 0,0
    for i in range(0,min(n,k)):
        ans = max(ans,(tot:=tot+v1[i])+(k-i-1)*a[i])
    print(ans)

# 315237438	        Apr/13/2025 11:19UTC+6	        Krishno_MD	        1904B - Collecting Game	        PyPy 3-64	        Accepted	        374 ms	        17500 KB

import itertools
# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    v = list(map(int,input().split()))
    vp = [(v[i],i) for i in range(n)]
    vp.sort()
    prs = list(itertools.accumulate(vp[i][0] for i in range(n)))
    a = [-1]*n
    d = []
    for i in range(n):
        d.append(vp[i][1])
        if i==n-1 or vp[i+1][0]>prs[i]:
            while d:
                a[d[-1]]=i
                d.pop()
    print(*a)

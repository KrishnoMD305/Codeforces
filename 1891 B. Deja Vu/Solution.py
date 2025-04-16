# 315790918	        Apr/16/2025 11:33UTC+6	        Krishno_MD	        1891B - Deja Vu	        PyPy 3-64	        Accepted	        312 ms	        22400 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,q = map(int,input().split())
    v1,v2 = list(map(int,input().split())),list(map(int,input().split()))
    v = set()
    for i in v2:
        if i in v:
            continue
        v.add(i)
        for j in range(n):
            if v1[j]%(1<<i)==0:
                v1[j] += (1<<(i-1))
    print(*v1)

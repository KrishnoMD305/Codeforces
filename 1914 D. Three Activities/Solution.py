from itertools import product
# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    a = {i+1:x for i,x in enumerate(map(int,input().split()))}
    b = {i+1:x for i,x in enumerate(map(int,input().split()))}
    c = {i+1:x for i,x in enumerate(map(int,input().split()))}
    a1 = dict(sorted(a.items(), key = lambda x:x[1], reverse=True)[:3])
    b1 = dict(sorted(b.items(), key = lambda x:x[1], reverse=True)[:3])
    c1 = dict(sorted(c.items(), key = lambda x:x[1], reverse=True)[:3])
    m = 0
    for (k1,v1),(k2,v2),(k3,v3) in product(a1.items(),b1.items(),c1.items()):
        if k1 != k2 and k2!=k3 and k3!=k1:
            m = max(m,v1+v2+v3)
    print(m)

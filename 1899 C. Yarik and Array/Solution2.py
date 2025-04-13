# 315287070	        Apr/13/2025 18:28UTC+6	        Krishno_MD	        1899C - Yarik and Array	        PyPy 3-64	        Accepted	        187 ms	        18400 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n = int(input())
    v = list(map(int,input().split()))
    a,s = v[0],v[0]
    for i in range(1,n): s=0 if s<0 else s; s=s+v[i] if v[i]%2 != v[i-1]%2 else v[i]; a=max(a,s)
    print(a)

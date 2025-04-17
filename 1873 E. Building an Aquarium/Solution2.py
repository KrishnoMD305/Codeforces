# 315917027	        Apr/17/2025 12:27UTC+6	        Krishno_MD	        1873E - Building an Aquarium	        PyPy 3-64	        Accepted	        375 ms	        22900 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,x = map(int,input().split())
    v = list(map(int,input().split()))
    ans,hs,he = -1,1,1e10
    while hs<=he:
        mid = hs+int((he-hs)/2)
        w = sum(max(0,mid-i) for i in v)
        if w<=x:
            ans,hs=mid,mid+1
        else:
            he=mid-1
    print(ans)

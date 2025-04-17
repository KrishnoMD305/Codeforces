# 315916992	        Apr/17/2025 12:27UTC+6	        Krishno_MD	        1873E - Building an Aquarium	        PyPy 3-64	        Accepted	        265 ms	        23000 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,x = map(int,input().split())
    v = list(map(int,input().split()))
    ans,hs,he = -1,1,1e10
    while hs<=he:
        w,mid = 0, hs+int((he-hs)/2)
        for i in v:
            if mid>i:
                w += (mid-i)
        if w<=x:
            ans=mid
            hs=mid+1
        else:
            he=mid-1
    print(ans)

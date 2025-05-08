# 316467181	        Apr/21/2025 12:31UTC+6	        Krishno_MD	        1842B - Tenzing and Books	        PyPy 3-64	        Accepted	        358 ms	        24500 KB

# Krishno_MD_KUET_CSE

t = int(input())

for i in range(t):
    n,x = map(int,input().split())
    know = 0
    for i in range(3):
        v = list(map(int,input().split()))
        for i in v:
            if (x|i)!=x:
                break
            know = (know|i)
    print("Yes" if know==x else "No")

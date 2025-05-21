# 320702149	        May/22/2025 04:56UTC+6	        Krishno_MD	        1794B - Not Dividing	        PyPy 3-64	        Accepted	        264 ms	        9000 KB

# Krishno_Mondol_KUET_CSE
def solution():
    n = int(input())
    v = [x+1 if x==1 else x for x in map(int,input().split())]
    for i in range(1,n):
        if v[i]%v[i-1]==0:
            v[i] += 1
    print(*v)

test = int(input())
for i in range(test):
    solution()

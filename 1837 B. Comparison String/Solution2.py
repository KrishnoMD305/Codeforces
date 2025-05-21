# 319949580	        May/17/2025 03:56UTC+6	        Krishno_MD	        1837B - Comparison String	        PyPy 3-64	        Accepted	        93 ms	        1800 KB

# Krishno_Mondol_KUET_CSE

def solution():
    n = int(input())
    str = input()
    maxx,b_count = 1,1
    for i in range(1,len(str)):
        b_count = b_count+1 if str[i]==str[i-1] else 1
        maxx = max(maxx,b_count)
    print(maxx+1)

test = int(input())
for i in range(test):
    solution()

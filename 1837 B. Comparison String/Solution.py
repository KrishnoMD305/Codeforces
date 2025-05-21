# 319949448	        May/17/2025 03:52UTC+6	        Krishno_MD	        1837B - Comparison String	        PyPy 3-64	        Accepted	        109 ms	        1800 KB

# Krishno_Mondol_KUET_CSE

def solution():
    n = int(input())
    str = input()
    maxx,b_count = 1,1
    for i in range(1,len(str)):
        if str[i]==str[i-1]:
            b_count += 1
            maxx = max(maxx,b_count)
        else:
            maxx = max(maxx,b_count)
            b_count = 1
    print(maxx+1)

test = int(input())
for i in range(test):
    solution()

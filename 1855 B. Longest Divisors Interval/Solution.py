# 319701509	        May/15/2025 05:27UTC+6	        Krishno_MD	        1855B - Longest Divisors Interval	        PyPy 3-64	        Accepted	        124 ms	        3800 KB

# Krishno_Mondol_KUET_CSE

def solution():
    n,max_el = int(input()) , 1
    while n%max_el==0: max_el+=1
    print(max_el-1)

test = int(input())
for i in range(test):
    solution()
